/* f_0x101fcd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101fcd90(Guest* g)
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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

    if (rd32(COW_IMG(0x1066389cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x1066389cu));
        edx = in_edx;
        goto L_101fceb3;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        goto L_101fceb3;
    }
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101fc580u), self, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101fceb3;
    }
    eax = t1;
    edx = t2;
    if ((uint32_t)(int16_t)arg1 == 5u) goto L_101fce32;
    if ((uint32_t)(int16_t)arg1 != 6u) goto L_101fcead;
    if ((int16_t)rd16(self + 0x5cu) < 0) goto L_101fcdfb;
    t3 = rd16(self + 0x5eu);
    wr16(self + 0x5cu, 0xffffu);
    wr16(self + 0x58u, (uint16_t)t3);
    g->eax = (eax & 0xffff0000u) | t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x101fcae0u), self, 0);
    t5 = g->edx;
    t6 = (uint32_t)(int16_t)rd16(self + 0x5au);
    g->edx = t5;
    t7 = cow_call_regs(g, COW_IMG(0x101f7080u), t4, self, g->edx, 0, 2, t6, 0u);
    t8 = g->edx;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101fcdfb: ;
    if (rd16(self + 0x58u) != 0u) goto L_101fce0d;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t9 = cow_fastcall(g, COW_IMG(0x101fcd60u), self, edx, 0);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_101fce0d: ;
    wr16(self + 0x58u, 0u);
    wr16(self + 0x5eu, 0u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x101fcae0u), self, 0);
    t12 = (uint32_t)(int16_t)rd16(self + 0x5au);
    g->edx = t12;
    t13 = cow_call_regs(g, COW_IMG(0x101f7080u), t11, self, g->edx, 0, 2, t12, 0u);
    t14 = g->edx;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_101fce32: ;
    if (rd32(eax) != 0x7fffffffu)
    {
        ecx = rd32(eax);
        goto L_101fce4e;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t15 = cow_fastcall(g, COW_IMG(0x101fcd60u), self, edx, 0);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10037b90u), t16, 0);
    t19 = g->edx;
    g->edx = t19;
    return (t18 & 0xffffff00u) | 1u;
L_101fce4e: ;
    if ((int32_t)ecx < 0) goto L_101fce71;
    if (rd32(self + 0x6cu) != 0u)
    {
        ecx = rd32(self + 0x6cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t20 = cow_thiscall_cdecl(g, ecx, ecx, 1, eax);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t22 = cow_fastcall(g, COW_IMG(0x101fcd60u), self, edx, 0);
    t23 = g->ecx;
    t24 = g->edx;
    g->edx = t24;
    t25 = cow_thiscall(g, COW_IMG(0x10037b90u), t23, 0);
    t26 = g->edx;
    g->edx = t26;
    return (t25 & 0xffffff00u) | 1u;
L_101fce71: ;
    wr16(self + 0x5eu, rd16(self + 0x58u));
    t27 = rd16(eax);
    wr16(self + 0x58u, (uint16_t)-t27);
    wr16(self + 0x5cu, rd16(eax + 4u));
    g->edx = (edx & 0xffff0000u) | (uint16_t)-t27;
    t28 = rd16(eax + 4u);
    g->esp = sp0 - 4u;
    t29 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    t30 = g->edx;
    wr16(self + 0x5au, (uint16_t)t29);
    g->edx = t30;
    t31 = cow_thiscall(g, COW_IMG(0x101fcae0u), self, 0);
    t32 = g->edx;
    g->edx = t32;
    t33 = cow_call_regs(g, COW_IMG(0x101f7080u), t31, self, g->edx, 0, 2, 0u, 0u);
    t34 = g->ecx;
    t35 = g->edx;
    g->edx = t35;
    t36 = cow_thiscall(g, COW_IMG(0x10037b90u), t34, 0);
    t37 = g->edx;
    eax = t36;
    edx = t37;
L_101fcead: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101fceb3: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fcd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fcd90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
