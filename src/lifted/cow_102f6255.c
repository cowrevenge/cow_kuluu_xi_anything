/* f_0x102f6255 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102f6255(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = rd32(rd32(arg1 + 4u) + 0x40u);
    ecx = self;
    edx = in_edx;
    ebx = 0u;
    esi = 0u;
    edi = rd32(arg1 + 4u);
L_102f6286: ;
    if (eax != 0u) goto L_102f626b;
    eax = rd32(edi + 0x44u);
L_102f62b0: ;
    if (eax != 0u) goto L_102f628f;
    if ((int32_t)esi > 0)
    {
        t1 = rd32(edi + 0x48u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t2 = cow_cdecl(g, COW_IMG(0x103028f7u), 3, arg1, esi, ebx);
        t3 = g->edx;
        if ((int32_t)t2 < (int32_t)ebx)
        {
            eax = t2;
            t4 = cow_divs(g, eax, esi);
            t5 = cow_mods(g, eax, esi);
            if ((int32_t)t4 > 0)
            {
                eax = t4;
                edx = t5;
                loc_8 = t4;
            }
            else
            {
                eax = t4;
                edx = t5;
                loc_8 = 1u;
            }
        }
        else
        {
            eax = t2;
            edx = t3;
            loc_8 = 0x3b9aca00u;
        }
        esi = rd32(edi + 0x40u);
L_102f6357: ;
        if (esi != 0u) goto L_102f62ef;
        esi = rd32(edi + 0x44u);
L_102f63cb: ;
        if (esi != 0u) goto L_102f6360;
    }
    g->edx = edx;
    return eax;
L_102f626b: ;
    if (rd32(eax) == 0u)
    {
        ecx = rd32(eax + 8u);
        edx = rd32(eax + 4u) * rd32(eax + 8u);
        ebx = ebx + rd32(eax + 4u) * rd32(eax + 8u);
        esi = esi + rd32(eax + 0xcu) * rd32(eax + 8u);
    }
    eax = rd32(eax + 0x24u);
    goto L_102f6286;
L_102f628f: ;
    if (rd32(eax) == 0u)
    {
        ecx = rd32(eax + 8u);
        edx = rd32(eax + 4u) * rd32(eax + 8u) * 0x80u;
        ebx = ebx + rd32(eax + 4u) * rd32(eax + 8u) * 0x80u;
        esi = esi + rd32(eax + 0xcu) * rd32(eax + 8u) * 0x80u;
    }
    eax = rd32(eax + 0x24u);
    goto L_102f62b0;
L_102f62ef: ;
    if (rd32(esi) == 0u)
    {
        t17 = cow_divu(g, rd32(esi + 4u) - 1u, rd32(esi + 0xcu));
        t18 = cow_modu(g, rd32(esi + 4u) - 1u, rd32(esi + 0xcu));
        if ((int32_t)(t17 + 1u) > (int32_t)loc_8)
        {
            ecx = rd32(esi + 0xcu);
            edx = t18;
            ebx = rd32(esi + 4u);
            t19 = rd32(esi + 8u) * ebx;
            wr32(esi + 0x10u, ecx * loc_8);
            g->eax = esi + 0x28u;
            g->ecx = ecx * loc_8;
            g->esp = sp0 - 0x1cu;
            t20 = cow_call_regs(g, COW_IMG(0x103028fcu), g->eax, g->ecx, edx, 1, 1, arg1);
            t21 = g->ecx;
            t22 = g->edx;
            wr8(esi + 0x22u, 1u);
            eax = t20;
            ecx = t21;
            edx = t22;
        }
        else
        {
            eax = t17 + 1u;
            ecx = rd32(esi + 0xcu);
            edx = t18;
            ebx = rd32(esi + 4u);
            wr32(esi + 0x10u, ebx);
        }
        t23 = rd32(esi + 0x10u);
        t24 = rd32(esi + 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t25 = cow_cdecl(g, COW_IMG(0x102f6063u), 5, arg1, 1u, t24, t23, in_edi);
        t26 = g->edx;
        wr32(esi, t25);
        t27 = rd32(edi + 0x4cu);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0u);
        wr8(esi + 0x21u, 0u);
        wr32(esi + 0x14u, t27);
        eax = t27;
        edx = t26;
    }
    esi = rd32(esi + 0x24u);
    goto L_102f6357;
L_102f6360: ;
    if (rd32(esi) == 0u)
    {
        t6 = cow_divu(g, rd32(esi + 4u) - 1u, rd32(esi + 0xcu));
        t7 = cow_modu(g, rd32(esi + 4u) - 1u, rd32(esi + 0xcu));
        if ((int32_t)(t6 + 1u) > (int32_t)loc_8)
        {
            ecx = rd32(esi + 0xcu);
            edx = t7;
            ebx = rd32(esi + 4u);
            t8 = rd32(esi + 8u) * ebx * 0x80u;
            wr32(esi + 0x10u, ecx * loc_8);
            g->eax = esi + 0x28u;
            g->ecx = ecx * loc_8;
            g->esp = sp0 - 0x1cu;
            t9 = cow_call_regs(g, COW_IMG(0x103028fcu), g->eax, g->ecx, edx, 1, 1, arg1);
            t10 = g->ecx;
            t11 = g->edx;
            wr8(esi + 0x22u, 1u);
            eax = t9;
            ecx = t10;
            edx = t11;
        }
        else
        {
            eax = t6 + 1u;
            ecx = rd32(esi + 0xcu);
            edx = t7;
            ebx = rd32(esi + 4u);
            wr32(esi + 0x10u, ebx);
        }
        t12 = rd32(esi + 0x10u);
        t13 = rd32(esi + 8u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t14 = cow_thiscall_cdecl(g, COW_IMG(0x102f60f5u), ecx, 5, arg1, 1u, t13, t12, in_edi);
        t15 = g->edx;
        wr32(esi, t14);
        t16 = rd32(edi + 0x4cu);
        wr32(esi + 0x18u, 0u);
        wr32(esi + 0x1cu, 0u);
        wr8(esi + 0x21u, 0u);
        wr32(esi + 0x14u, t16);
        eax = t16;
        edx = t15;
    }
    esi = rd32(esi + 0x24u);
    goto L_102f63cb;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6255(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102f6255(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
