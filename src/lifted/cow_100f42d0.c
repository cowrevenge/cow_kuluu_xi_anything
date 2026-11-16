/* f_0x100f42d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_100f42d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 > 3u) goto L_100f4492;
    t1 = rd32(COW_IMG(0x100f44a0u) + arg1 * 4u);
    switch (t1 - RD)
    {
    case 0x100f42e9u: goto L_100f42e9;
    case 0x100f4300u: goto L_100f4300;
    case 0x100f4348u: goto L_100f4348;
    case 0x100f446au: goto L_100f446a;
    default: rt_fatal(g, COW_IMG(0x100f42e2u), "switch");
    }
    return 0;
L_100f42e9: ;
    return ((int32_t)rd32(self + 0x208u) < 0) - 1u & 3u;
L_100f4300: ;
    wr32(self + 0x210u, 0u);
    wr32(self + 0x214u, 0u);
    wr32(self + 0x218u, 0u);
    wr16(self + 0x10u, 0u);
L_100f4318: ;
    t12 = rd32(self + 0x210u);
    g->eax = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x10310f2du), 4, self + 0xc48u, self + 0x21cu, t12, 5u);
    wr32(self + 0x208u, t13);
    return 0x16u;
L_100f4348: ;
    if ((int32_t)rd32(self + 0x218u) <= 0)
    {
        ecx = self;
        goto L_100f43ba;
    }
    eax = rd32(self + 0x218u);
    if ((int32_t)rd32(self + 0x214u) >= (int32_t)eax) goto L_100f4390;
    ecx = rd32(self + 0x214u);
    t2 = ecx * 0x208u + self + 0x224u;
    wr32(arg2, t2);
    t3 = rd32(self + 0x214u) + 1u;
    wr32(self + 0x214u, t3);
    return 0x18u;
L_100f4390: ;
    if ((int32_t)eax >= 5) goto L_100f43a0;
    return 0x17u;
L_100f43a0: ;
    t4 = rd32(self + 0x210u);
    wr32(self + 0x218u, 0u);
    wr32(self + 0x214u, 0u);
    wr32(self + 0x210u, eax + t4);
    wr16(self + 0x10u, 0u);
    ecx = eax + t4;
L_100f43ba: ;
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        goto L_100f43f4;
    }
    eax = rd32(self + 0x208u);
    t5 = rd16(self + 0x10u);
    wr16(self + 0x10u, (uint16_t)(((eax & 0xffff0000u) | t5) + 1u));
    if ((uint16_t)t5 <= 0xau) goto L_100f4318;
    if (arg3 != 0u)
    {
        t6 = rd32(self + 0x208u);
        wr32(arg3, t6);
    }
    return 0x14u;
L_100f43f4: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x10310f22u), 2, eax, self + 0x218u);
    t8 = g->edx;
    if (t7 != 0u)
    {
        eax = t7;
        edx = t8;
        sf = (int32_t)t7 < 0;
        goto L_100f440f;
    }
    wr32(self + 0x218u, 0u);
    return 0x16u;
L_100f440f: ;
    if (!sf) goto L_100f443f;
    if (arg3 != 0u)
    {
        wr32(arg3, eax);
    }
    t9 = rd32(self + 0x208u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t9);
    wr32(self + 0x208u, 0xffffffffu);
    return 0x14u;
L_100f443f: ;
    t10 = rd32(self + 0x208u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10310ed5u), 1, t10);
    t11 = rd32(self + 0x218u);
    wr32(self + 0x208u, 0xffffffffu);
    return ((int32_t)t11 <= 0) + 0x16u;
L_100f446a: ;
    if ((int32_t)rd32(self + 0x208u) >= 0)
    {
        eax = rd32(self + 0x208u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x10310ed5u), 1, eax);
        wr32(self + 0x208u, 0xffffffffu);
    }
    return 6u;
L_100f4492: ;
    return 0x15u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f42d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f42d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
