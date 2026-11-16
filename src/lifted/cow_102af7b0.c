/* f_0x102af7b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=9 */
uint32_t cow_fn_102af7b0(Guest* g)
{
    double d21;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t3;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 84u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebp = in_ebp;
    }
    else
    {
        esi = rd32(sp0 + 4u);
        if (arg3 == 0u)
        {
            eax = in_eax;
            edx = in_edx;
            ebp = in_ebp;
        }
        else
        {
            wr32(sp0 - 0x1cu, in_ebp);
            wr32(sp0 - 0x20u, esi + 0x1cu);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 0x1cu;
            cow_cdecl(g, COW_IMG(0x102af190u), 1, esi + 0x1cu);
            t1 = g->ecx;
            t2 = g->edx;
            g->esp = sp0 - 0x20u;
            t3 = cow_stdcall(g, COW_IMG(0x102aeeb0u), 0);
            t4 = rd32(sp0 + 0x14u);
            wr32(esi + 0x54u, t3);
            wr32(t3 + 0x14u, t4);
            wr32(rd32(esi + 0x54u) + 0x28u, arg2);
            wr32(sp0 - 0x24u, 0x16eu);
            wr32(rd32(esi + 0x54u) + 0x18u, arg3);
            wr32(rd32(esi + 0x54u) + 0x20u, arg4);
            wr32(sp0 - 0x28u, COW_IMG(0x103bf580u));
            wr32(sp0 - 0x2cu, arg8 * 4u);
            t5 = rd32(esi + 0x54u);
            wr32(t5 + 0x34u, arg9 & 0xfffffffdu);
            wr32(sp0 - 0x30u, 1u);
            wr32(esi + 0x50u, arg8);
            g->ecx = arg9 & 0xfffffffdu;
            g->edx = t5;
            g->esp = sp0 - 0xcu;
            t6 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, arg8 * 4u, COW_IMG(0x103bf580u), 0x16eu, rd32(sp0 - 0x20u), in_ebp, in_edi, in_esi, in_ebx);
            t7 = g->ecx;
            t8 = g->edx;
            wr32(sp0 - 0x34u, 0x16fu);
            wr32(sp0 - 0x38u, COW_IMG(0x103bf580u));
            wr32(sp0 - 0x3cu, arg8 * 4u);
            wr32(sp0 - 0x40u, 1u);
            wr32(esi + 0x30u, t6);
            g->ecx = t7;
            g->edx = t8;
            g->esp = sp0 - 0x1cu;
            t9 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, arg8 * 4u, COW_IMG(0x103bf580u), 0x16fu, 1u, arg8 * 4u, COW_IMG(0x103bf580u), 0x16eu, rd32(sp0 - 0x20u));
            t10 = g->ecx;
            t11 = g->edx;
            wr32(esi + 0x38u, t9);
            wr32(sp0 - 0x44u, 0x170u);
            wr32(sp0 - 0x48u, COW_IMG(0x103bf580u));
            wr32(sp0 - 0x4cu, arg8 * 0xcu);
            wr32(sp0 - 0x50u, 1u);
            g->ecx = t10;
            g->edx = t11;
            g->esp = sp0 - 0x2cu;
            t12 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, arg8 * 0xcu, COW_IMG(0x103bf580u), 0x170u, 1u, arg8 * 4u, COW_IMG(0x103bf580u), 0x16fu, 1u);
            t13 = g->ecx;
            t14 = g->edx;
            wr32(esi + 0x3cu, t12);
            if ((int32_t)arg8 <= 0)
            {
                ecx = t13;
                edx = t14;
            }
            else
            {
                wr32(sp0 + 4u, 0u);
                wr32(sp0 + 0x14u, arg7 - arg6);
                eax = arg7 - arg6;
                ebx = 0u;
                edi = arg6;
L_102af883: ;
                wr32(ebx * 4u + rd32(esi + 0x30u), rd32(edi));
                t15 = rd32(eax + edi);
                wr32(ebx * 4u + rd32(esi + 0x38u), t15);
                t16 = arg3 + rd32(edi) * 0xcu;
                wr32(sp0 - 0x20u, t16);
                t17 = rd32(esi + 0x3cu) + rd32(sp0 + 4u);
                wr32(sp0 - 0x24u, t17);
                g->esp = sp0 - 0x1cu;
                cow_cdecl(g, COW_IMG(0x10274670u), 2, t17, t16);
                t18 = arg3 + rd32(edi) * 0xcu;
                wr32(sp0 - 0x28u, t18);
                wr32(sp0 - 0x2cu, sp0 - 0xcu);
                wr32(sp0 - 0x30u, sp0 - 0xcu);
                g->ecx = sp0 - 0xcu;
                g->esp = sp0 - 0x24u;
                cow_cdecl(g, COW_IMG(0x10274980u), 3, sp0 - 0xcu, sp0 - 0xcu, t18);
                t19 = g->ecx;
                t20 = rd32(sp0 + 4u) + 0xcu;
                wr32(sp0 + 4u, t20);
                if ((int32_t)(ebx + 1u) < (int32_t)arg8)
                {
                    ebx = ebx + 1u;
                    edi = edi + 4u;
                    goto L_102af87f;
                }
                ecx = t19;
                edx = t20;
            }
            wr32(sp0 - 0x20u, ecx);
            d21 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)arg8);
            wrf32(sp0 - 0x20u, (float)d21);
            wr32(sp0 - 0x24u, sp0 - 0xcu);
            wr32(sp0 - 0x28u, sp0 - 0xcu);
            g->eax = sp0 - 0xcu;
            g->ecx = sp0 - 0xcu;
            g->esp = sp0 - 0x1cu;
            t22 = cow_cdecl(g, COW_IMG(0x10274950u), 3, sp0 - 0xcu, sp0 - 0xcu, cow_f2bits(d21));
            t23 = g->ecx;
            wr32(sp0 - 0x2cu, sp0 - 0xcu);
            wr32(sp0 - 0x30u, esi + 0x44u);
            g->edx = sp0 - 0xcu;
            g->esp = sp0 - 0x28u;
            t24 = cow_cdecl(g, COW_IMG(0x10274670u), 2, esi + 0x44u, sp0 - 0xcu);
            t25 = g->edx;
            eax = t24;
            edx = t25;
            ebp = rd32(sp0 - 0x1cu);
        }
    }
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_102af87f: ;
    eax = rd32(sp0 + 0x14u);
    goto L_102af883;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102af7b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102af7b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
