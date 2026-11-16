/* f_0x102b30b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102b30b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10c;
    uint32_t loc_110;
    uint32_t loc_130;
    uint32_t loc_134;
    uint32_t loc_138;
    int64_t q17;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const double xin0 = ST(0);
    cow_frame(g, sp0, 320u);

    wr32(sp0 - 0x120u, in_esi);
    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102b32a4;
    }
    eax = rd32(arg1 + 0x34u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102b32a4;
    }
    ecx = rd32(eax + 0x14u);
    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_edi);
    wr32(sp0 - 0x130u, eax);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x124u;
    t1 = cow_cdecl(g, COW_IMG(0x102b32e0u), 3, eax, in_edi, in_ebp);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    fpush(g, xin0);
    g->esp = sp0 - 0x12cu;
    cow_stdcall(g, COW_IMG(0x1028b000u), 0);
    t4 = g->ecx;
    t5 = g->edx;
    if (arg2 == 0u)
    {
        ecx = t4;
        edx = t5;
        goto L_102b3285;
    }
    ecx = t4;
    edx = t5;
    if (arg2 == 1u) goto L_102b3281;
    if (rd32(arg1 + 0x50u) == 0u) goto L_102b3242;
    wr32(sp0 - 0x130u, sp0 - 0x84u);
    g->eax = sp0 - 0x84u;
    g->edx = edx;
    g->esp = sp0 - 0x124u;
    t6 = cow_cdecl(g, COW_IMG(0x102b6720u), 3, sp0 - 0x84u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
    t7 = g->edx;
    wr32(sp0 - 0x134u, sp0 - 0x108u);
    g->ecx = sp0 - 0x108u;
    g->edx = t7;
    g->esp = sp0 - 0x130u;
    cow_cdecl(g, COW_IMG(0x102b67f0u), 1, sp0 - 0x108u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x138u, arg1);
    g->ecx = t8;
    t10 = rd32(rd32(arg1 + 0x48u));
    t11 = rd32(arg1 + 0x48u);
    g->esp = sp0 - 0x134u;
    t12 = cow_cdecl(g, COW_IMG(0x102ac520u), 1, arg1);
    t13 = g->ecx;
    wr32(sp0 - 0x110u, t12 + 1u);
    t14 = t12 * 2u + 3u;
    wr32(sp0 - 0xf4u, t14);
    if (t10 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_102b3295;
    }
    ecx = t13;
    edx = t14;
    ebx = t10;
    ebp = t12 + 1u;
    edi = t11 + 4u;
    loc_110 = t12 + 1u;
    wr32(sp0 - 0x10cu, ebx);
    loc_10c = ebx;
L_102b314a: ;
    wr32(sp0 - 0x130u, sp0 - 0x108u);
    if ((int32_t)rd32(edi) <= 0)
    {
        ebx = rd32(edi);
        edi = edi + 4u;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_cdecl(g, COW_IMG(0x102b32e0u), 3, sp0 - 0x108u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
        t23 = g->edx;
        wr32(sp0 - 0x11cu, rd32(edi));
        t24 = rd32(edi + 4u);
        wr32(sp0 - 0x114u, t24);
        if ((int32_t)-ebx <= 2)
        {
            ecx = rd32(edi);
            edx = t23;
            ebx = -ebx;
        }
        else
        {
            eax = t24;
            ebx = -ebx;
            esi = 2u;
L_102b31df: ;
            if ((int32_t)(esi & 0x80000001u) >= 0)
            {
                zf = (esi & 0x80000001u) == 0u;
            }
            else
            {
                edx = esi & 0x80000001u;
                zf = (edx - 1u | 0xfffffffeu) + 1u == 0u;
            }
            if (zf)
            {
                wr32(sp0 - 0x118u, eax);
            }
            else
            {
                wr32(sp0 - 0x11cu, eax);
            }
            t25 = rd32(edi + esi * 4u);
            wr32(sp0 - 0x114u, t25);
            wr32(sp0 - 0x130u, ebp);
            wr32(sp0 - 0x134u, sp0 - 0x11cu);
            wr32(sp0 - 0x138u, sp0 - 0x84u);
            wr32(sp0 - 0x13cu, sp0 - 0x108u);
            g->ecx = sp0 - 0x11cu;
            g->edx = sp0 - 0x84u;
            g->esp = sp0 - 0x12cu;
            cow_call_regs(g, COW_IMG(0x102b6890u), sp0 - 0x108u, g->ecx, g->edx, 1, 4, sp0 - 0x108u, sp0 - 0x84u, sp0 - 0x11cu, ebp);
            t26 = g->ecx;
            t27 = g->edx;
            if ((int32_t)(esi + 1u) < (int32_t)ebx)
            {
                esi = esi + 1u;
                goto L_102b31db;
            }
            ecx = t26;
            edx = t27;
        }
    }
    else
    {
        ebx = rd32(edi);
        edi = edi + 4u;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x124u;
        cow_cdecl(g, COW_IMG(0x102b32e0u), 3, sp0 - 0x108u, rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u));
        t15 = g->ecx;
        t16 = g->edx;
        if ((int32_t)ebx <= 0)
        {
            ecx = t15;
            edx = t16;
        }
        else
        {
            edx = t16;
            q17 = (uint64_t)cow_mulu(0xaaaaaaabu, ebx - 1u);
            ebp = (cow_qhi(q17) >> 1u) + 1u;
            esi = edi + 8u;
L_102b317a: ;
            t18 = rd32(esi - 8u);
            wr32(sp0 - 0x11cu, t18);
            t19 = rd32(esi - 4u);
            wr32(sp0 - 0x118u, t19);
            wr32(sp0 - 0x114u, rd32(esi));
            t20 = rd32(sp0 - 0x110u);
            wr32(sp0 - 0x130u, t20);
            wr32(sp0 - 0x134u, sp0 - 0x11cu);
            wr32(sp0 - 0x138u, sp0 - 0x84u);
            wr32(sp0 - 0x13cu, sp0 - 0x108u);
            g->ecx = sp0 - 0x84u;
            g->edx = sp0 - 0x108u;
            g->esp = sp0 - 0x12cu;
            cow_call_regs(g, COW_IMG(0x102b6890u), sp0 - 0x11cu, g->ecx, g->edx, 1, 4, sp0 - 0x108u, sp0 - 0x84u, sp0 - 0x11cu, t20);
            t21 = g->ecx;
            t22 = g->edx;
            if (ebp != 1u)
            {
                ebp = ebp - 1u;
                esi = esi + 0xcu;
                goto L_102b317a;
            }
            ecx = t21;
            edx = t22;
            ebp = rd32(sp0 - 0x110u);
        }
    }
    t28 = rd32(sp0 - 0x10cu) - 1u;
    wr32(sp0 - 0x10cu, t28);
    if (rd32(sp0 - 0x10cu) != 1u)
    {
        edi = ebx * 4u + edi;
        loc_10c = t28;
        goto L_102b314a;
    }
    eax = t28;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    g->top = (g->top + 1u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b31db: ;
    eax = rd32(sp0 - 0x114u);
    goto L_102b31df;
L_102b3242: ;
    if (rd32(rd32(arg1 + 0x48u)) == 0u)
    {
        eax = rd32(rd32(arg1 + 0x48u));
        goto L_102b3295;
    }
    eax = rd32(rd32(arg1 + 0x48u));
    esi = rd32(arg1 + 0x48u) + 4u;
    ebx = eax;
L_102b3250: ;
    wr32(sp0 - 0x130u, esi + 4u);
    if ((int32_t)rd32(esi) <= 0)
    {
        edi = rd32(esi);
        loc_130 = esi + 4u;
        esi = esi + 4u;
        wr32(sp0 - 0x134u, -edi);
        wr32(sp0 - 0x138u, 5u);
        loc_134 = -edi;
        edi = -edi;
        loc_138 = 5u;
    }
    else
    {
        edi = rd32(esi);
        loc_130 = esi + 4u;
        esi = esi + 4u;
        wr32(sp0 - 0x134u, edi);
        wr32(sp0 - 0x138u, 4u);
        loc_134 = edi;
        loc_138 = 4u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x12cu;
    t29 = cow_cdecl(g, COW_IMG(0x1028a820u), 3, loc_138, loc_134, loc_130);
    t30 = g->ecx;
    t31 = g->edx;
    if (ebx != 1u)
    {
        eax = t29;
        ecx = t30;
        edx = t31;
        ebx = ebx - 1u;
        esi = edi * 4u + esi;
        goto L_102b3250;
    }
    eax = t29;
    ecx = t30;
    edx = t31;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    g->top = (g->top + 1u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3281: ;
    wr32(sp0 - 0x130u, 3u);
    eax = arg2 - 1u;
    loc_130 = 3u;
L_102b3287: ;
    wr32(sp0 - 0x134u, COW_IMG(0x102b3080u));
    wr32(sp0 - 0x138u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x12cu;
    t32 = cow_call_regs(g, COW_IMG(0x102abee0u), g->eax, g->ecx, edx, 1, 3, arg1, COW_IMG(0x102b3080u), loc_130);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
L_102b3295: ;
    g->esp = sp0;
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x120u);
    g->edi = rd32(sp0 - 0x12cu);
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = edx;
    g->top = (g->top + 1u) & 7u;
    return cow_tailcall(g, COW_IMG(0x1028bbf0u), eax, ecx, edx);
L_102b3285: ;
    wr32(sp0 - 0x130u, 1u);
    eax = arg2;
    loc_130 = 1u;
    goto L_102b3287;
L_102b32a4: ;
    wr32(sp0 - 0x124u, 0x16fu);
    wr32(sp0 - 0x128u, COW_IMG(0x103bfd88u));
    wr32(sp0 - 0x12cu, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x124u;
    t35 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bfd88u));
    t36 = g->ecx;
    t37 = g->edx;
    wr32(sp0 - 0x130u, COW_IMG(0x103bfd80u));
    wr32(sp0 - 0x134u, COW_IMG(0x103beaa4u));
    g->edx = t37;
    g->esp = sp0 - 0x12cu;
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bfd80u));
    t39 = g->edx;
    g->edx = t39;
    return t38;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b30b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102b30b0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
