/* f_0x10123160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10123160(Guest* g)
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
        goto L_101231fe;
    }
    ecx = rd32(COW_IMG(0x10662d40u));
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101b5c90u), ecx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        goto L_101231fe;
    }
    edx = t2;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x1du);
    t4 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t4;
        goto L_1012319e;
    }
    edx = t4;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, 0x9du);
    t6 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        goto L_101231fe;
    }
    edx = t6;
L_1012319e: ;
    if (arg2 > 5u)
    {
        eax = arg2;
        goto L_101231fe;
    }
    t7 = rd32(COW_IMG(0x10123204u) + arg2 * 4u);
    switch (t7 - RD)
    {
    case 0x101231aeu: goto L_101231ae;
    case 0x101231beu: goto L_101231be;
    case 0x101231ceu: goto L_101231ce;
    case 0x101231deu: goto L_101231de;
    case 0x101231eeu: goto L_101231ee;
    case 0x101231feu: eax = arg2; goto L_101231fe;
    default: rt_fatal(g, COW_IMG(0x101231a7u), "switch");
    }
    return 0;
L_101231ae: ;
    g->esp = sp0;
    t12 = cow_thiscall(g, COW_IMG(0x101240d0u), COW_IMG(0x104e1c40u), 1, arg1);
    return t12;
L_101231be: ;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10124070u), COW_IMG(0x104e1c40u), 1, arg1);
    return t11;
L_101231ce: ;
    g->esp = sp0;
    t10 = cow_thiscall(g, COW_IMG(0x101240f0u), COW_IMG(0x104e1c40u), 1, arg1);
    return t10;
L_101231de: ;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x10124090u), COW_IMG(0x104e1c40u), 1, arg1);
    return t9;
L_101231ee: ;
    g->esp = sp0;
    t8 = cow_thiscall(g, COW_IMG(0x10124130u), COW_IMG(0x104e1c40u), 1, arg1);
    return t8;
L_101231fe: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10123160(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10123160(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
