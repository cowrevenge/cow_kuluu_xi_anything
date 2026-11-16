/* f_0x102b2e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b2e00(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        ecx = self;
        goto L_102b2f35;
    }
    edi = rd32(arg1 + 0x34u);
    if (rd32(edi + 0x14u) == 0u)
    {
        ecx = rd32(edi + 0x14u);
        goto L_102b2f35;
    }
    ecx = rd32(edi + 0x14u);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, ecx);
    t1 = rd32(edi + 0x54u);
    wr32(sp0 - 0x28u, t1);
    g->eax = ecx;
    g->ecx = t1;
    t2 = rd32(arg1 + 0x44u);
    t3 = rd32(arg1 + 0x4cu);
    g->esp = sp0 - 0x20u;
    t4 = cow_cdecl(g, COW_IMG(0x1028a750u), 2, t1, ecx);
    t5 = g->ecx;
    t6 = rd32(edi + 0x60u);
    wr32(sp0 - 0x2cu, t6);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x1028a7b0u), 1, t6);
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(edi + 0x58u);
    wr32(sp0 - 0x30u, t9);
    g->eax = t9;
    g->edx = t8;
    g->esp = sp0 - 0x2cu;
    t10 = cow_cdecl(g, COW_IMG(0x1028a770u), 1, t9);
    t11 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    t12 = rd32(edi + 0x5cu);
    wr32(sp0 - 0x38u, t12);
    g->ecx = t12;
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x1028a790u), 2, t12, 0u);
    t13 = g->ecx;
    t14 = rd32(edi + 0x68u);
    wr32(sp0 - 0x3cu, t14);
    t15 = rd32(edi + 0x64u);
    wr32(sp0 - 0x40u, t15);
    g->eax = t15;
    g->ecx = t13;
    g->edx = t14;
    g->esp = sp0 - 0x38u;
    t16 = cow_cdecl(g, COW_IMG(0x1028a7f0u), 2, t15, t14);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x20u;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t19 = g->ecx;
    t20 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t19;
        edx = t20;
        ebx = t2;
        esi = t3;
        goto L_102b2f13;
    }
    ecx = t19;
    edx = t20;
    ebx = t2;
    esi = t3;
    if (arg2 == 1u) goto L_102b2ec8;
    if (arg2 - 1u != 3u)
    {
        eax = arg2 - 4u;
        goto L_102b2f2a;
    }
    if (ebx == 0u)
    {
        eax = arg2 - 4u;
        goto L_102b2f2a;
    }
L_102b2e85: ;
    wr32(sp0 - 0x14u, rd32(esi));
    t21 = rd32(esi + 4u);
    wr32(sp0 - 0x10u, t21);
    t22 = rd32(esi + 8u);
    wr32(sp0 - 8u, t22);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 5u);
    t23 = rd32(esi + 0xcu);
    wr32(sp0 - 0xcu, t23);
    g->eax = t22;
    g->ecx = t23;
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x20u;
    t24 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 5u, 4u, sp0 - 0x14u);
    t25 = g->ecx;
    t26 = g->edx;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        goto L_102b2e85;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b2ec8: ;
    if (ebx == 0u)
    {
        eax = arg2 - 1u;
        goto L_102b2f2a;
    }
L_102b2ecc: ;
    wr32(sp0 - 4u, rd32(esi));
    wr32(sp0 - 0x14u, rd32(esi));
    t27 = rd32(esi + 4u);
    wr32(sp0 - 0x10u, t27);
    t28 = rd32(esi + 8u);
    wr32(sp0 - 0xcu, t28);
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    wr32(sp0 - 0x28u, 5u);
    wr32(sp0 - 0x2cu, 3u);
    t29 = rd32(esi + 0xcu);
    wr32(sp0 - 8u, t29);
    g->eax = sp0 - 0x14u;
    g->ecx = t28;
    g->edx = t29;
    g->esp = sp0 - 0x20u;
    t30 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 3u, 5u, sp0 - 0x14u);
    t31 = g->ecx;
    t32 = g->edx;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        goto L_102b2ecc;
    }
    eax = t30;
    ecx = t31;
    edx = t32;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b2f13: ;
    if (ebx == 0u)
    {
        eax = arg2;
        goto L_102b2f2a;
    }
    eax = arg2;
L_102b2f17: ;
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, 4u);
    wr32(sp0 - 0x2cu, 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t33 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, 1u, 4u, esi);
    t34 = g->ecx;
    t35 = g->edx;
    if (ebx != 1u)
    {
        eax = t33;
        ecx = t34;
        edx = t35;
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        goto L_102b2f17;
    }
    eax = t33;
    ecx = t34;
    edx = t35;
L_102b2f2a: ;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b2f35: ;
    wr32(sp0 - 0x1cu, 0x4fu);
    wr32(sp0 - 0x20u, COW_IMG(0x103bfd88u));
    wr32(sp0 - 0x24u, COW_IMG(0x103b379cu));
    g->eax = arg1;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    t36 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t37 = g->ecx;
    t38 = g->edx;
    wr32(sp0 - 0x28u, COW_IMG(0x103bfd80u));
    wr32(sp0 - 0x2cu, COW_IMG(0x103beaa4u));
    g->edx = t38;
    g->esp = sp0 - 0x24u;
    t39 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bfd80u));
    t40 = g->edx;
    g->edx = t40;
    return t39;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b2e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b2e00(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
