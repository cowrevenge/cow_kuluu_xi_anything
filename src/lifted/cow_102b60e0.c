/* f_0x102b60e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b60e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 88u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        goto L_102b6289;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    esi = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u) goto L_102b6289;
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, 0x141u);
    wr32(sp0 - 0x24u, COW_IMG(0x103c2074u));
    wr32(sp0 - 0x28u, 4u);
    t1 = rd32(esi + 0x48u);
    wr32(sp0 - 0x2cu, t1);
    g->esp = sp0 - 0x18u;
    t2 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t1, 4u, COW_IMG(0x103c2074u), 0x141u, in_edi);
    wr32(sp0 - 0x30u, t2);
    wr32(sp0 - 0x34u, sp0 - 8u);
    wr32(sp0 - 0x38u, arg2);
    wr32(sp0 - 0x3cu, COW_IMG(0x102b62c0u));
    wr32(sp0 - 0x40u, esi);
    wr32(sp0 - 0xcu, t2);
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x102bac40u), g->eax, sp0 - 8u, arg2, 1, 7, esi, COW_IMG(0x102b62c0u), arg2, sp0 - 8u, t2, rd32(sp0 - 0x2cu), 4u);
    t3 = rd32(esi + 0x34u);
    wr32(sp0 - 4u, t3);
    t4 = rd32(sp0 - 8u);
    wr32(sp0 - 0x44u, t4);
    t5 = rd32(esi + 0x48u);
    wr32(sp0 - 0x48u, t5);
    wr32(sp0 - 0x4cu, t2);
    t6 = rd32(esi + 0x4cu);
    wr32(sp0 - 0x50u, t6);
    wr32(sp0 - 0x54u, sp0 - 4u);
    g->ecx = sp0 - 4u;
    g->edx = t5;
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x102a9aa0u), 5, sp0 - 4u, t6, t2, t5, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if (rd32(esi + 0x4cu) == 0u)
    {
        ecx = t7;
        edx = t8;
        edi = t2;
    }
    else
    {
        eax = rd32(esi + 0x4cu);
        ecx = t7;
        edx = t8;
        edi = t2;
        wr32(sp0 - 0x20u, 0x14eu);
        wr32(sp0 - 0x24u, COW_IMG(0x103c2074u));
        wr32(sp0 - 0x28u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103c2074u), 0x14eu);
        t9 = g->ecx;
        t10 = g->edx;
        ecx = t9;
        edx = t10;
    }
    t11 = rd32(esi + 0x44u);
    wr32(sp0 + 4u, 0u);
    if ((int32_t)t11 <= 0) goto L_102b6257;
    eax = edi + 8u;
    ebp = 0u;
L_102b6180: ;
    if (rd32(eax - 8u) == rd32(eax))
    {
        edx = rd32(eax - 8u);
        goto L_102b61a3;
    }
    ecx = rd32(eax);
    edx = rd32(eax - 8u);
    ebx = rd32(eax + 4u);
    edi = rd32(eax - 4u);
    if (edi == ebx) goto L_102b61a3;
    if (edx != edi) goto L_102b619b;
    if (ecx == ebx) goto L_102b61a3;
L_102b619b: ;
    if (edi != ecx) goto L_102b61b3;
    if (edx != ebx) goto L_102b61b3;
L_102b61a3: ;
    t12 = rd32(sp0 + 4u);
    wr32(eax - 8u, 0xffffffffu);
    wr32(sp0 + 4u, t12 + 1u);
L_102b61b3: ;
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(esi + 0x44u))
    {
        eax = eax + 0x10u;
        ebp = ebp + 1u;
        goto L_102b6180;
    }
    ecx = rd32(esi + 0x44u);
    if (rd32(sp0 + 4u) == 0u) goto L_102b6253;
    eax = rd32(sp0 + 4u);
    wr32(sp0 - 0x20u, 0x16bu);
    wr32(sp0 - 0x24u, COW_IMG(0x103c2074u));
    wr32(sp0 - 0x28u, 4u);
    t13 = ecx * 4u - eax * 4u;
    wr32(sp0 - 0x2cu, t13);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t14 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, t13, 4u, COW_IMG(0x103c2074u), 0x16bu, rd32(sp0 - 0x1cu));
    t15 = g->edx;
    t16 = rd32(esi + 0x44u);
    wr32(sp0 + 4u, t14);
    if ((int32_t)t16 <= 0)
    {
        edx = t15;
        ebp = t13;
        edi = ecx - eax;
        ecx = t16;
    }
    else
    {
        ebp = t13;
        edi = ecx - eax;
        eax = t14;
        ecx = rd32(sp0 - 0xcu) + 8u;
        ebx = 0u;
L_102b61fe: ;
        if (rd32(ecx - 8u) != 0xffffffffu)
        {
            edx = rd32(ecx - 8u);
            wr32(eax, edx);
            t17 = rd32(ecx - 4u);
            wr32(eax + 4u, t17);
            wr32(eax + 8u, rd32(ecx));
            t18 = rd32(ecx + 4u);
            wr32(eax + 0xcu, t18);
            eax = eax + 0x10u;
        }
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x44u))
        {
            ecx = ecx + 0x10u;
            ebx = ebx + 1u;
            goto L_102b61fe;
        }
        ecx = ecx + 0x10u;
        edx = rd32(esi + 0x44u);
    }
    wr32(sp0 - 0x20u, 0x175u);
    wr32(sp0 - 0x24u, COW_IMG(0x103c2074u));
    t19 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x28u, t19);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, t19, COW_IMG(0x103c2074u), 0x175u);
    t20 = g->edx;
    t21 = rd32(sp0 + 4u);
    wr32(esi + 0x48u, ebp);
    wr32(esi + 0x44u, edi);
    wr32(esi + 0x4cu, t21);
    ecx = t21;
    edx = t20;
L_102b625a: ;
    if (rd32(esi + 0x34u) == 0u)
    {
        ebx = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = rd32(esi + 0x34u);
        ebx = rd32(sp0 - 0x18u);
        edi = rd32(sp0 - 0x1cu);
        if (rd32(eax + 0x58u) == 0u)
        {
            ecx = rd32(eax + 0x58u);
        }
        else
        {
            ecx = rd32(eax + 0x58u);
            wr32(sp0 - 0x18u, esi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_cdecl(g, COW_IMG(0x102b6000u), 1, esi);
            t22 = g->ecx;
            t23 = g->edx;
            ecx = t22;
            edx = t23;
        }
    }
    if (rd32(esi + 0x50u) == 0u) goto L_102b62af;
    eax = rd32(esi + 0x50u);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102b5ee0u), 1, esi);
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x10u);
    return;
L_102b6253: ;
    edi = rd32(sp0 - 0xcu);
L_102b6257: ;
    wr32(esi + 0x4cu, edi);
    goto L_102b625a;
L_102b6289: ;
    wr32(sp0 - 0x18u, 0x13fu);
    wr32(sp0 - 0x1cu, COW_IMG(0x103c2074u));
    wr32(sp0 - 0x20u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t24 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2074u));
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x24u, COW_IMG(0x103c2024u));
    wr32(sp0 - 0x28u, COW_IMG(0x103beaa4u));
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103c2024u));
    ebx = in_ebx;
    edi = in_edi;
L_102b62af: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b60e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b60e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
