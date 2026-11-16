/* f_0x10123220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10123220(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10662d40u)) == 0u)
    {
        eax = in_eax;
        goto L_101232be;
    }
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101232be;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x38u);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        goto L_1012325e;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0xb8u);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_101232be;
    }
    edx = t6;
L_1012325e: ;
    if (arg2 > 5u)
    {
        eax = arg2;
        goto L_101232be;
    }
    t7 = rd32(COW_IMG(0x101232c4u) + arg2 * 4u);
    switch (t7 - RD)
    {
    case 0x1012326eu: goto L_1012326e;
    case 0x1012327eu: goto L_1012327e;
    case 0x1012328eu: goto L_1012328e;
    case 0x1012329eu: goto L_1012329e;
    case 0x101232aeu: goto L_101232ae;
    case 0x101232beu: eax = arg2; goto L_101232be;
    default: rt_fatal(g, COW_IMG(0x10123267u), "switch");
    }
    return 0;
L_1012326e: ;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x101240d0u), COW_IMG(0x104e1c40u), 1, arg1);
    return t12;
L_1012327e: ;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, arg1);
    return t11;
L_1012328e: ;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x101240f0u), COW_IMG(0x104e1c40u), 1, arg1);
    return t10;
L_1012329e: ;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10124090u), COW_IMG(0x104e1c40u), 1, arg1);
    return t9;
L_101232ae: ;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, arg1);
    return t8;
L_101232be: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123220(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
