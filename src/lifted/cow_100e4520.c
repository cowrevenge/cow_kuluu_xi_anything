/* f_0x100e4520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100e4520(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_100e45d4;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    if (arg1 > 0xbu) goto L_100e45d4;
    t1 = rd32(COW_IMG(0x100e45d8u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100e4541u: goto L_100e4541;
    case 0x100e455au: goto L_100e455a;
    case 0x100e4573u: goto L_100e4573;
    case 0x100e458au: goto L_100e458a;
    case 0x100e45a3u: goto L_100e45a3;
    case 0x100e45bau: goto L_100e45ba;
    case 0x100e45d4u: goto L_100e45d4;
    default: rt_fatal(g, COW_IMG(0x100e453au), "switch");
    }
    return 0;
L_100e4541: ;
    t12 = (eax & 0xffffff00u) | (~rd8(eax + 0x2cfd8u) >> 2u & 1u);
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 0u, t12);
    return t13;
L_100e455a: ;
    t10 = (arg1 & 0xffffff00u) | (~rd8(eax + 0x2cfd8u) >> 1u & 1u);
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, t10);
    return t11;
L_100e4573: ;
    t8 = (in_edx & 0xffffff00u) | (~rd8(eax + 0x2cfd8u) & 1u);
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 2u, t8);
    return t9;
L_100e458a: ;
    t6 = (eax & 0xffffff00u) | (~rd8(eax + 0x2cfd9u) >> 6u & 1u);
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 5u, t6);
    return t7;
L_100e45a3: ;
    t4 = (arg1 & 0xffffff00u) | (uint8_t)~rd8(eax + 0x2cfd9u) >> 7u;
    g->esp = sp0;
    t5 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 6u, t4);
    return t5;
L_100e45ba: ;
    t2 = (in_edx & 0xffffff00u) | (~rd8(eax + 0x2cfdbu) >> 5u & 1u);
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 0xbu, t2);
    return t3;
L_100e45d4: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e4520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e4520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
