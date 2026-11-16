/* f_0x10158ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10158ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (self == 0u) goto L_10158d74;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x101597f0u), in_eax, self, in_edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_10158d74;
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x101598a0u), eax, self, g->edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)arg1 == 0u)
    {
        ecx = t4;
        edi = t3;
        t10 = rd32(self + 0x64u);
        t11 = rd32(self + 0x60u);
        g->edx = t10;
        g->esp = sp0 - 0xcu;
        t12 = cow_cdecl(g, COW_IMG(0x10083b40u), 3, edi, t11, t10);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    else
    {
        edx = t5;
        edi = t3;
        t6 = rd32(self + 0x64u);
        t7 = rd32(self + 0x60u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_cdecl(g, COW_IMG(0x10083d00u), 3, edi, t7, t6);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    if (eax != 0u) goto L_10158d84;
    if ((uint8_t)arg1 == 0u) goto L_10158d26;
    t14 = rd32(self + 0x64u);
    t15 = rd32(self + 0x60u);
    g->ecx = t14;
    g->esp = sp0 - 0xcu;
    t16 = cow_cdecl(g, COW_IMG(0x10083b40u), 3, edi, t15, t14);
    t17 = g->ecx;
    if (t16 == 0u)
    {
        ecx = t17;
        goto L_10158d56;
    }
    eax = t16;
L_10158d0d: ;
    t18 = rd32(self + 0x64u);
    t19 = rd32(self + 0x60u);
    g->ecx = t18;
    g->esp = sp0 - 0xcu;
    t20 = cow_cdecl(g, COW_IMG(0x10083b40u), 3, eax, t19, t18);
    t21 = g->ecx;
    if (t20 != 0u)
    {
        eax = t20;
        goto L_10158d0d;
    }
    ecx = t21;
    edi = eax;
L_10158d52: ;
    if (edi != 0u) goto L_10158d6c;
L_10158d56: ;
    t30 = rd32(self + 0x64u);
    t31 = rd32(self + 0x60u);
    g->esp = sp0 - 0xcu;
    t32 = cow_cdecl(g, COW_IMG(0x10083620u), 2, t31, t30);
    return t32;
L_10158d26: ;
    t22 = rd32(self + 0x64u);
    t23 = rd32(self + 0x60u);
    g->ecx = t23;
    g->esp = sp0 - 0xcu;
    t24 = cow_cdecl(g, COW_IMG(0x10083d00u), 3, edi, t23, t22);
    t25 = g->ecx;
    if (t24 == 0u)
    {
        ecx = t25;
        goto L_10158d56;
    }
    eax = t24;
L_10158d3b: ;
    t26 = rd32(self + 0x64u);
    t27 = rd32(self + 0x60u);
    g->ecx = t27;
    g->esp = sp0 - 0xcu;
    t28 = cow_cdecl(g, COW_IMG(0x10083d00u), 3, eax, t27, t26);
    t29 = g->ecx;
    if (t28 != 0u)
    {
        eax = t28;
        goto L_10158d3b;
    }
    ecx = t29;
    edi = eax;
    goto L_10158d52;
L_10158d6c: ;
    return edi;
L_10158d74: ;
    t33 = rd32(self + 0x64u);
    t34 = rd32(self + 0x60u);
    g->esp = sp0 - 0xcu;
    t35 = cow_cdecl(g, COW_IMG(0x10083620u), 2, t34, t33);
    eax = t35;
L_10158d84: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10158ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10158ca0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
