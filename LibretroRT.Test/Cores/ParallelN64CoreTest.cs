using System.Collections.Generic;
using System.Threading.Tasks;
using Xunit;

namespace LibretroRT.Test.Cores
{
    public class ParallelN64CoreTest : TestBase
    {
        public static IEnumerable<object[]> RomNames => new List<object[]>
        {
            new object[] { "N64Game.n64" },
        };

        public ParallelN64CoreTest() : base(() => ParallelN64RT.ParallelN64Core.Instance)
        {
        }

        [Theory]
        [MemberData(nameof(RomNames))]
        public override Task LoadingRomWorks(string romName)
        {
            return LoadingRomWorksInternal(romName);
        }

        [Theory]
        [MemberData(nameof(RomNames))]
        public override Task ExecutionWorks(string romName)
        {
            return ExecutionWorksInternal(romName);
        }
    }
}
