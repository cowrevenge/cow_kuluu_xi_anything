/* f_0x100e47c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e47c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e485b;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (arg1 > 0xbu) goto L_100e485b;
    t1 = rd32(COW_IMG(0x100e4860u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100e47e1u: goto L_100e47e1;
    case 0x100e47edu: goto L_100e47ed;
    case 0x100e47f8u: goto L_100e47f8;
    case 0x100e4801u: goto L_100e4801;
    case 0x100e480du: goto L_100e480d;
    case 0x100e4819u: goto L_100e4819;
    case 0x100e4823u: goto L_100e4823;
    case 0x100e482cu: goto L_100e482c;
    case 0x100e4837u: goto L_100e4837;
    case 0x100e4843u: goto L_100e4843;
    case 0x100e484fu: goto L_100e484f;
    case 0x100e485bu: goto L_100e485b;
    default: rt_fatal(g, COW_IMG(0x100e47dau), "switch");
    }
    return 0;
L_100e47e1: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfd8u) >> 2u & 1u);
L_100e47ed: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfd8u) >> 1u & 1u);
L_100e47f8: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfd8u) & 1u);
L_100e4801: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfd8u) >> 3u & 3u);
L_100e480d: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfd9u) >> 6u & 1u);
L_100e4819: ;
    return (eax & 0xffffff00u) | rd8(eax + 0x2cfd9u) >> 7u;
L_100e4823: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfdbu) & 1u);
L_100e482c: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfdbu) >> 1u & 1u);
L_100e4837: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfdbu) >> 2u & 1u);
L_100e4843: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfdbu) >> 3u & 1u);
L_100e484f: ;
    return (eax & 0xffffff00u) | (rd8(eax + 0x2cfdbu) >> 5u & 1u);
L_100e485b: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e47c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e47c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
