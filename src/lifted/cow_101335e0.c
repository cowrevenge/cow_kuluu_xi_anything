/* f_0x101335e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101335e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, COW_IMG(0x100e56e0u), 0);
    t2 = g->edx;
    t3 = rd32(self + 8u);
    wr32(self + 0x74u, t1);
    wr8(self + 0xd8u, 0u);
    wr8(self + 0xf0u, 0u);
    wr8(self + 0x120u, 0u);
    if (t3 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101336c2;
    }
    eax = t1;
    ecx = t3;
    edx = t2;
    if (rd8(self + 0x14fu) == 0xffu) goto L_10133677;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t5 = g->edx;
    g->eax = rd32(t4);
    g->edx = t5;
    t6 = rd32(t4);
    t7 = rd32(rd32(t4) + 0x888u);
    t8 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0x11u);
    t9 = g->edx;
    g->edi = t7;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x1011ae50u), rd32(self + 8u), 2, 0x11u, t7);
    t11 = g->edx;
    g->edx = t11;
    t12 = rd32(self + 8u);
    t13 = cow_call_regs(g, COW_IMG(0x10118db0u), t10, t12, g->edx, 0, 2, 1u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0x25cu);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(self + 0x140u, t16);
    g->edx = t18;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 4u);
    t20 = g->edx;
    wr32(self + 0x144u, t19);
    g->edi = in_edi;
    g->edx = t20;
    return t19;
L_10133677: ;
    if (rd8(COW_IMG(0x105781c0u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x105781c0u));
        goto L_1013368a;
    }
    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x105781c0u));
    if ((int16_t)rd16(COW_IMG(0x105781c2u)) < 0) goto L_10133693;
L_1013368a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, 5u, 0x11u);
    t22 = g->ecx;
    t23 = g->edx;
    eax = t21;
    ecx = t22;
    edx = t23;
L_10133693: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t24 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 7u);
    t25 = g->edx;
    g->edx = t25;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, COW_IMG(0x1011aaf0u), rd32(self + 8u), 3, t24, 0u, 1u);
    t27 = g->edx;
    g->edx = t27;
    t28 = cow_call_regs(g, COW_IMG(0x10118db0u), t26, rd32(self + 8u), g->edx, 0, 2, 0x11u, 0u);
    t29 = g->edx;
    wr32(self + 0x140u, self + 0xf0u);
    wr32(self + 0x144u, self + 0xd8u);
    eax = t28;
    edx = t29;
L_101336c2: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101335e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101335e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
