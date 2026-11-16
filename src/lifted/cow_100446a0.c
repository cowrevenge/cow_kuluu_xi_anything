/* f_0x100446a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100446a0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x3cu, in_ebx);
    wr32(sp0 - 0x40u, in_ebp);
    wr32(sp0 - 0x44u, in_esi);
    wr32(sp0 - 0x48u, in_edi);
    if (arg1 != 0u)
    {
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x48u;
        t1 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x38u, 0);
        t2 = g->edx;
        wr32(sp0 - 0x4cu, 0xffffffffu);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 5u);
        wr32(sp0 - 0x58u, arg1);
        g->edx = t2;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x38u, 4, arg1, 5u, 0u, 0xffffffffu);
        t3 = g->edx;
        wr32(sp0 - 0x4cu, 0u);
        g->edx = t3;
        t4 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
        t5 = g->edx;
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
        }
        else
        {
            edx = t5;
            edi = t4;
L_100446e6: ;
            wr32(sp0 - 0x4cu, 0xffffffffu);
            wr32(sp0 - 0x50u, 0u);
            wr32(sp0 - 0x54u, 5u);
            wr32(sp0 - 0x58u, rd32(COW_IMG(0x1047d128u)));
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 5u, 0u, 0xffffffffu);
            t6 = g->edx;
            edx = t6;
L_100446fb: ;
            wr32(sp0 - 0x4cu, 0u);
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            t7 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t8 = g->ecx;
            t9 = g->edx;
            if (t7 == 0u)
            {
                ecx = t8;
                edx = t9;
                goto L_10044756;
            }
            ecx = t8;
            edx = t9;
            esi = t7;
            if (!(rd8(esi + 0x1au) >> 2u & 1u)) goto L_100446fb;
            if (rd32(esi + 0x28u) != rd32(edi + 0x14u)) goto L_100446fb;
            eax = rd32(edi + 0x14u);
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            cow_call_regs(g, COW_IMG(0x10071e90u), eax, esi, g->edx, 1, 0);
            t10 = g->ecx;
            t11 = g->edx;
            wr32(sp0 - 0x4cu, t10);
            wr32(sp0 - 0x4cu, 0u);
            g->ebp = arg1;
            g->edx = t11;
            t12 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x4cu, esi, g->edx, 0, 1, 0u);
            t13 = g->edx;
            g->edx = t13;
            t14 = cow_thiscall(g, COW_IMG(0x10071ec0u), esi, 0);
            t15 = g->edx;
            if ((rd16(esi + 0x18u) & 0x7fffu) != 0u)
            {
                edx = t15;
                goto L_100446fb;
            }
            eax = t14;
            edx = t15;
            t16 = rd32(esi + 0x14u);
            wr32(sp0 - 0x4cu, t16);
            g->edx = edx;
            g->esp = sp0 - 0x48u;
            cow_stdcall(g, COW_IMG(0x10073b20u), 1, t16);
            t17 = g->edx;
            edx = t17;
            goto L_100446e6;
        }
L_10044784: ;
        wr32(sp0 - 0x4cu, 0xffffffffu);
        wr32(sp0 - 0x50u, 0u);
        wr32(sp0 - 0x54u, 7u);
        wr32(sp0 - 0x58u, arg1);
        g->esp = sp0 - 0x48u;
        cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x38u, 4, arg1, 7u, 0u, 0xffffffffu);
        if (rd32(sp0 - 0x24u) != 0u)
        {
            edx = rd32(sp0 - 0x24u);
L_100447a1: ;
            ecx = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_100447ac: ;
            if (ecx == 0u) goto L_100447d9;
            if (rd32(ecx + 0x1cu) != 0x4d730000u) goto L_100447c9;
            if (rd32(ecx + 0x80u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(ecx + 0x80u);
                eax = rd32(eax);
            }
            if (eax == edx) goto L_100447ce;
L_100447c9: ;
            ecx = rd32(ecx + 0xcu);
            goto L_100447ac;
        }
    }
L_100447ec: ;
    g->ebp = in_ebp;
    return;
L_10044756: ;
    wr32(sp0 - 0x4cu, ecx);
    wr32(sp0 - 0x4cu, 0u);
    g->ebp = arg1;
    g->edx = edx;
    g->esp = sp0 - 0x48u;
    t18 = cow_call_regs(g, COW_IMG(0x100538e0u), sp0 - 0x4cu, edi, g->edx, 0, 1, 0u);
    t19 = g->edx;
    wr32(sp0 - 0x4cu, 1u);
    cow_call_regs(g, COW_IMG(0x10053890u), t18, edi, t19, 0, 1, 1u);
    t20 = g->edx;
    wr32(sp0 - 0x4cu, 0u);
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
    t22 = g->edx;
    if (t21 != 0u)
    {
        edx = t22;
        edi = t21;
        goto L_100446e6;
    }
    eax = t21;
    edx = t22;
    goto L_10044784;
L_100447ce: ;
    g->esp = sp0 - 0x48u;
    cow_call_regs(g, COW_IMG(0x10074ab0u), eax, ecx, edx, 1, 0);
    edx = rd32(sp0 - 0x24u);
    goto L_100447a1;
L_100447d9: ;
    wr32(sp0 - 0x4cu, 0u);
    g->esp = sp0 - 0x48u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x38u, 1, 0u);
    if (rd32(sp0 - 0x24u) != 0u)
    {
        edx = rd32(sp0 - 0x24u);
        goto L_100447a1;
    }
    goto L_100447ec;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100446a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100446a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
