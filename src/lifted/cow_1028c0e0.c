/* f_0x1028c0e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1028c0e0(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd8(rd32(sp0 + 4u) + 0xa8u) & 1u)
    {
        esi = rd32(sp0 + 4u);
        goto L_1028c121;
    }
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103b9a08u));
    wr32(sp0 + 4u, COW_IMG(0x103b3b14u));
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x102858b0u), t1, t2, t3);
    return;
L_1028c121: ;
    t4 = rd32(sp0 + 8u);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10291220u), self, 2, t4, COW_IMG(0x10361d24u));
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 != 0u)
    {
        ecx = t6;
        edx = t7;
        ebx = t5;
        goto L_1028c162;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    ebp = t4;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b98f8u));
    t9 = g->ecx;
    t10 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b99e4u), ebp);
    return;
L_1028c162: ;
    if ((int32_t)rd32(esi + 0x58u) <= 0)
    {
        eax = rd32(esi + 0x58u);
        edi = 0u;
    }
    else
    {
        eax = rd32(esi + 0x58u);
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t11 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, eax, 4u, COW_IMG(0x103b98f8u), 0x109u, in_edi);
        t12 = g->edx;
        if ((int32_t)rd32(esi + 0x58u) <= 0)
        {
            eax = 0u;
            ecx = rd32(esi + 0x58u);
            edx = t12;
            edi = t11;
            goto L_1028c198;
        }
        eax = 0u;
        edx = t12;
        edi = t11;
L_1028c189: ;
        wr32(eax * 4u + edi, 0u);
        if ((int32_t)(eax + 1u) < (int32_t)rd32(esi + 0x58u))
        {
            eax = eax + 1u;
            goto L_1028c189;
        }
        eax = eax + 1u;
        ecx = rd32(esi + 0x58u);
    }
L_1028c198: ;
    wr8(COW_IMG(0x109a2794u), 0xffu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x1028c210u), 2, esi, ebx);
    t14 = g->ecx;
    t15 = g->edx;
    g->ebx = ebx;
    g->ecx = t14;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1028c430u), g->eax, g->ecx, t15, 1, 5, esi, ebx, esi, ebx, in_edi);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->esp = sp0 - 0x20u;
    t19 = cow_call_regs(g, COW_IMG(0x1028c560u), g->eax, g->ecx, t18, 1, 2, esi, ebx);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x28u;
    t22 = cow_cdecl(g, COW_IMG(0x1028cc00u), 3, esi, ebx, edi);
    t23 = g->ecx;
    t24 = g->edx;
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0x24u;
    t25 = cow_cdecl(g, COW_IMG(0x1028d370u), 7, esi, ebx, edi, esi, ebx, edi, esi);
    t26 = g->ecx;
    t27 = g->edx;
    g->edx = t27;
    g->esp = sp0 - 0x28u;
    t28 = cow_thiscall_cdecl(g, COW_IMG(0x1028d550u), t26, 9, esi, ebx, edi, esi, ebx, edi, esi, ebx, edi);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0x48u;
    t31 = cow_cdecl(g, COW_IMG(0x1028d050u), 3, esi, ebx, esi);
    t32 = g->ecx;
    t33 = g->edx;
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1028d2e0u), 5, esi, ebx, in_edi, in_esi, in_ebp);
    t34 = g->ecx;
    t35 = g->edx;
    if (edi == 0u)
    {
        ecx = t34;
        edx = t35;
    }
    else
    {
        ecx = t34;
        edx = t35;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, edi, COW_IMG(0x103b98f8u), 0x124u);
        t36 = g->ecx;
        t37 = g->edx;
        ecx = t36;
        edx = t37;
    }
    g->edi = edi;
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, in_edi, in_esi);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028c0e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028c0e0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
