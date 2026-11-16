/* f_0x102c8a2d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102c8a2d(Guest* g)
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (rd32(sp0 + 8u) != 0u)
        {
            esi = rd32(sp0 + 8u);
            if (arg4 != 0u)
            {
                t1 = arg4 * 0x14u + rd32(esi + 0xc0u) * 0x14u;
                g->eax = t1;
                g->esp = sp0 - 4u;
                t2 = cow_call_regs(g, COW_IMG(0x102c44bfu), g->eax, self, in_edx, 1, 6, arg1, t1, in_edi, in_esi, in_ebx, self);
                t3 = g->edx;
                if (t2 != 0u)
                {
                    ecx = t1;
                    edx = t3;
                    loc_8 = t2;
                    t4 = rd32(esi + 0xc0u) * 0x14u;
                    t5 = rd32(esi + 0xbcu);
                    g->eax = t4;
                    g->ecx = ecx;
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t6 = cow_cdecl(g, COW_IMG(0x103169e0u), 5, loc_8, t5, t4, in_edi, in_esi);
                    t7 = g->ecx;
                    t8 = g->edx;
                    t9 = rd32(esi + 0xbcu);
                    g->esp = sp0 - 0x20u;
                    cow_call_regs(g, COW_IMG(0x102c447cu), g->eax, g->ecx, t8, 1, 2, arg1, t9);
                    t10 = g->edx;
                    wr32(esi + 0xbcu, 0u);
                    wr32(sp0 + 8u, 0u);
                    if ((int32_t)arg4 > 0)
                    {
                        edx = t10;
                        edi = arg3 + 0xcu;
L_102c8ac4: ;
                        t11 = loc_8 + rd32(esi + 0xc0u) * 0x14u + rd32(sp0 + 8u) * 0x14u;
                        g->eax = edi - 0xcu;
                        g->ecx = loc_8;
                        g->esp = sp0 - 0x10u;
                        t12 = cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, t11, edi - 0xcu, in_edi);
                        t13 = g->ecx;
                        t14 = g->edx;
                        g->esp = sp0 - 0x18u;
                        t15 = cow_call_regs(g, COW_IMG(0x102c43fcu), g->eax, t13, t14, 1, 3, arg1, rd32(edi), t11);
                        t16 = g->ecx;
                        t17 = g->edx;
                        wr32(t11 + 8u, t15);
                        if (t15 != 0u)
                        {
                            eax = t15;
                            ecx = t16;
                            edx = t17;
                            ebx = t11;
                            t19 = rd32(edi - 4u);
                            g->edx = edx;
                            g->esp = sp0 - 0xcu;
                            cow_cdecl(g, COW_IMG(0x103169e0u), 5, eax, t19, rd32(edi), in_edi, in_esi);
                            t20 = g->edx;
                            wr32(ebx + 0xcu, rd32(edi));
                            wr8(ebx + 0x10u, rd8(arg1 + 0x68u));
                            edx = t20;
                        }
                        else
                        {
                            eax = t15;
                            ecx = t16;
                            edx = t17;
                            ebx = t11;
                            g->ebx = ebx;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c99e8u));
                            t18 = g->edx;
                            edx = t18;
                        }
                        wr32(sp0 + 8u, rd32(sp0 + 8u) + 1u);
                        if ((int32_t)rd32(sp0 + 8u) < (int32_t)arg4)
                        {
                            edi = edi + 0x14u;
                            goto L_102c8ac4;
                        }
                    }
                    wr32(esi + 0xbcu, loc_8);
                    wr32(esi + 0xc0u, arg4 + rd32(esi + 0xc0u));
                    wr8(esi + 0xb9u, rd8(esi + 0xb9u) | 2u);
                }
                else
                {
                    eax = t2;
                    ecx = t1;
                    edx = t3;
                    g->ebx = 0u;
                    g->esp = sp0 - 0x14u;
                    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, COW_IMG(0x103c99e8u));
                }
            }
        }
    }
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c8a2d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c8a2d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
