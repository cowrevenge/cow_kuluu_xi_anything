/* f_0x101f2ec0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101f2ec0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101f1120u), rd32(COW_IMG(0x10663740u)), 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        ebx = t1;
        goto L_101f2edb;
    }
    eax = t1;
    edx = t2;
    ebx = t1;
    if (ebx == rd32(self + 0x14u)) goto L_101f2eeb;
L_101f2edb: ;
    t3 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
L_101f2eeb: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, rd32(COW_IMG(0x10578204u)), g->edx, 0, 2, ebx, 1u);
    t7 = g->edx;
    if (ebx == 0u)
    {
        eax = t6;
        edx = t7;
        goto L_101f2fc5;
    }
    eax = t6;
    edx = t7;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, rd16(ebx));
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
        goto L_101f2fa2;
    }
    edx = t9;
    edi = t8;
    if (rd32(edi + 0x14b4u) != 0u)
    {
        eax = rd32(edi + 0x14b4u);
        goto L_101f2f44;
    }
    eax = rd32(edi + 0x14b4u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t10 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
    t11 = g->edx;
    g->edx = t11;
    t12 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 2u);
    t13 = g->edx;
    g->edx = t13;
    return t12;
L_101f2f44: ;
    if (rd16(eax) == 8u)
    {
        eax = (eax & 0xffff0000u) | rd16(eax);
        goto L_101f2f87;
    }
    eax = (eax & 0xffff0000u) | rd16(eax);
    if ((uint16_t)eax == 0x16u) goto L_101f2f87;
    if ((uint16_t)eax == 0x17u) goto L_101f2f87;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x1015b6c0u), edi, 0);
    t15 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        eax = t14;
        edx = t15;
        goto L_101f2f87;
    }
    eax = t14;
    edx = t15;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_thiscall(g, COW_IMG(0x1015b6f0u), edi, 0);
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 == 0u)
    {
        eax = t16;
        edx = t18;
        goto L_101f2f81;
    }
    eax = t16;
    ecx = t17;
    t19 = rd32(self + 0x14u);
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t20 = cow_call_regs(g, COW_IMG(0x101cc3a0u), g->eax, ecx, t19, 1, 3, t19, 0u, in_edi);
    t21 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        eax = t20;
        edx = t21;
        goto L_101f2f87;
    }
    eax = t20;
    edx = t21;
L_101f2f81: ;
    loc_14 = 5u;
L_101f2f9a: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, loc_14, 1u);
    t25 = g->edx;
    eax = t24;
    edx = t25;
L_101f2fa2: ;
    if (rd8(ebx + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 8u);
        goto L_101f2fc5;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 8u);
    if (rd16(ebx) == 0xffffu) goto L_101f2fc5;
    g->eax = eax;
    g->edx = edx;
    t26 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t27 = cow_thiscall(g, COW_IMG(0x10118bc0u), t26, 1, 2u);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 != 5u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        goto L_101f2fd1;
    }
    eax = t27;
    edx = t29;
    loc_14 = 0xbu;
L_101f2fc9: ;
    g->eax = eax;
    g->edx = edx;
    t30 = rd32(self + 8u);
    g->esp = sp0 - 0xcu;
    t31 = cow_thiscall(g, COW_IMG(0x10118b60u), t30, 2, loc_14, 2u);
    t32 = g->ecx;
    t33 = g->edx;
    eax = t31;
    ecx = t32;
    edx = t33;
L_101f2fd1: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t34 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t35 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
    }
    else
    {
        eax = t34;
        edx = t35;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t36 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 1u);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_101f2f87: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t22 = cow_thiscall(g, COW_IMG(0x10118bc0u), rd32(self + 8u), 1, 1u);
    t23 = g->edx;
    if (t22 != 5u)
    {
        eax = t22;
        edx = t23;
        goto L_101f2fa2;
    }
    eax = t22;
    edx = t23;
    loc_14 = 0xbu;
    goto L_101f2f9a;
L_101f2fc5: ;
    loc_14 = 5u;
    goto L_101f2fc9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f2ec0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f2ec0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
