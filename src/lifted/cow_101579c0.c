/* f_0x101579c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101579c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;

    t1 = rd8(self + 0x56u);
    t2 = rd8(self + 0x55u);
    wr8(self + 0x55u, 0u);
    wr8(self + 0x56u, 0u);
    t3 = rd8(self + 0x55u);
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), in_edx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        ebx = in_ebx & 0xffffff00u;
        loc_4 = (((self & 0xffffffu) | t1 << 0x18u) & 0xff00ffffu) | t2 << 0x10u;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_4 = (((self & 0xffffffu) | t1 << 0x18u) & 0xff00ffffu) | t2 << 0x10u;
        g->ebx = in_ebx & 0xffffff00u;
        g->edx = edx;
        g->esp = sp0;
        t7 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x24u, 1u, 0xffffffffu, in_esi, in_ebx, loc_4);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 != 1u)
        {
            ecx = t8;
            edx = t9;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            eax = t7;
            g->edx = rd32(rd32(COW_IMG(0x10662d40u)));
            t10 = rd32(COW_IMG(0x10662d40u));
            t11 = rd32(rd32(COW_IMG(0x10662d40u)));
            g->esp = sp0 - 0xcu;
            cow_thiscall(g, rd32(t11), t10, 0);
            t12 = g->ecx;
            t13 = g->edx;
            ecx = t12;
            edx = t13;
            ebx = (in_ebx & 0xffffff00u) | 1u;
        }
    }
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x40u)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)));
        goto L_10157a23;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)));
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101579b0u), eax, self, edx);
    return;
L_10157a23: ;
    if (eax != 0x60u) goto L_10157aff;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_stdcall(g, COW_IMG(0x10087010u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u) goto L_10157aff;
    ecx = t15;
    edx = t16;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_stdcall(g, COW_IMG(0x101576f0u), 0);
    t18 = g->edx;
    if ((uint8_t)t17 != 1u)
    {
        eax = t17;
        edx = t18;
    }
    else
    {
        eax = t17;
        edx = t18;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t19 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, 0u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    if (rd8(self + 0x22u) == 1u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t21 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, 0u);
        t22 = g->edx;
        eax = t21;
        edx = t22;
    }
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_call_regs(g, COW_IMG(0x10158480u), eax, self, g->edx, 1, 0);
    t24 = g->ecx;
    t25 = g->edx;
    g->edx = t25;
    t26 = cow_call_regs(g, COW_IMG(0x10087070u), t23, g->ecx, g->edx, 1, 1, 0u);
    t27 = g->edx;
    if ((uint8_t)t26 == 1u)
    {
        eax = t26;
        edx = t27;
        goto L_10157aec;
    }
    eax = t26;
    edx = t27;
    loc_4 = (loc_4 & 0xffff00ffu) | (uint8_t)t23 << 8u;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x10157fa0u), eax, self, g->edx, 1, 0);
    t29 = g->edx;
    if ((uint8_t)t28 == 1u)
    {
        eax = t28;
        edx = t29;
        goto L_10157aec;
    }
    edx = t29;
    g->esp = sp0 - 0xcu;
    t30 = cow_fastcall(g, COW_IMG(0x1015dce0u), COW_IMG(0x10621838u), edx, 0);
    t31 = g->ecx;
    t32 = g->edx;
    if ((uint8_t)t30 == 1u)
    {
        eax = t30;
        edx = t32;
        goto L_10157aec;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    if ((uint8_t)(loc_4 >> 8u) != 1u) goto L_10157aaf;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t33 = cow_thiscall(g, COW_IMG(0x10157660u), self, 1, 0u);
    t34 = g->edx;
    g->ebx = ebx;
    g->edx = t34;
    t35 = cow_call_regs(g, COW_IMG(0x101582f0u), t33, self, g->edx, 1, 0);
    t36 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t36;
    cow_tailcall(g, COW_IMG(0x101583f0u), t35, self, t36);
    return;
L_10157aaf: ;
    wr8(self + 0x55u, (uint8_t)(loc_4 >> 0x10u));
    wr8(self + 0x56u, loc_4 >> 0x18u);
    if ((uint8_t)ebx != 0u)
    {
        edx = (edx & 0xffffff00u) | loc_4 >> 0x18u;
    }
    else
    {
        edx = (edx & 0xffffff00u) | loc_4 >> 0x18u;
        g->ebx = ebx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t37 = cow_call_regs(g, COW_IMG(0x10157e20u), eax, self, g->edx, 1, 0);
        t38 = g->edx;
        eax = t37;
        edx = t38;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t39 = cow_thiscall(g, COW_IMG(0x10159780u), self, 0);
    t40 = g->edx;
    if (rd16(self + 0x68u) != 0u)
    {
        eax = t39;
        edx = t40;
    }
    else
    {
        eax = t39;
        edx = t40;
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t41 = cow_thiscall(g, COW_IMG(0x101585f0u), self, 0);
        t42 = g->edx;
        eax = t41;
        edx = t42;
    }
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t43 = cow_call_regs(g, COW_IMG(0x101581e0u), eax, self, g->edx, 1, 0);
    t44 = g->edx;
    wr8(self + 0x55u, 0u);
    wr8(self + 0x56u, 0u);
    eax = t43;
    edx = t44;
L_10157aec: ;
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t45 = cow_call_regs(g, COW_IMG(0x101582f0u), eax, self, g->edx, 1, 0);
    t46 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = t46;
    cow_tailcall(g, COW_IMG(0x101583f0u), t45, self, t46);
    return;
L_10157aff: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101579c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101579c0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
