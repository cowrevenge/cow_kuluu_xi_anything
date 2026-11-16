/* f_0x10208d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_10208d90(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 208u);

    wr32(sp0 - 0x9cu, in_ebx);
    if (arg1 != 1u)
    {
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0xa0u, arg5);
        g->edx = in_edx;
        g->esp = sp0 - 0x9cu;
        t1 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, arg5);
        t2 = g->edx;
        wr32(sp0 - 0x90u, t1);
        if (t1 == 0u)
        {
            edx = t2;
            ebp = in_ebp;
            esi = in_esi;
        }
        else
        {
            edx = t2;
            ebx = t1;
            loc_90 = t1;
            wr32(sp0 - 0xa0u, in_ebp);
            wr32(sp0 - 0xa4u, in_esi);
            g->esp = sp0 - 0xa4u;
            t3 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0x8cu, 0);
            t4 = rd32(ebx + 0x14ccu);
            wr32(sp0 - 0xa8u, t4);
            wr32(sp0 - 0xacu, sp0 - 0x8cu);
            g->ebx = ebx;
            g->edx = sp0 - 0x8cu;
            cow_cdecl(g, COW_IMG(0x10159f20u), 2, sp0 - 0x8cu, t4);
            t5 = g->edx;
            g->edx = t5;
            t6 = cow_thiscall(g, COW_IMG(0x1018d480u), sp0 - 0x8cu, 0);
            t7 = g->edx;
            if ((int32_t)t6 <= 0)
            {
                eax = t6;
            }
            else
            {
                edx = t7;
                g->edx = edx;
                g->esp = sp0 - 0xa4u;
                t8 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0x8cu, 0);
                t9 = g->ecx;
                t10 = g->edx;
                wr32(sp0 - 0xa8u, t8);
                wr32(sp0 - 0xacu, 0x80u);
                wr32(sp0 - 0xb0u, sp0 - 0x80u);
                g->esp = sp0 - 0x9cu;
                t11 = cow_call_regs(g, COW_IMG(0x1025c110u), g->eax, t9, t10, 1, 5, sp0 - 0x80u, 0x80u, t8, rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u));
                t12 = g->edx;
                wr32(sp0 - 0xb4u, 0x80808080u);
                wr32(sp0 - 0xb8u, 0u);
                wr32(sp0 - 0xbcu, sp0 - 0x80u);
                wr32(sp0 - 0xc0u, arg3);
                wr32(sp0 - 0xc4u, arg2);
                g->esp = sp0 - 0x98u;
                t13 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, arg2, arg3, sp0 - 0x80u, 0u, 0x80808080u, sp0 - 0x80u, 0x80u, rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu));
                eax = t13;
            }
            if (rd16(rd32(ebx + 0x14f4u)) == 0u)
            {
                eax = (eax & 0xffff0000u) | rd16(rd32(ebx + 0x14f4u));
                edx = rd32(ebx + 0x14f4u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | rd16(rd32(ebx + 0x14f4u));
                edx = rd32(ebx + 0x14f4u);
                if ((uint16_t)eax != 1u)
                {
                    if (rd32(ebx + 0x14dcu) == 0u)
                    {
                        eax = rd32(ebx + 0x14dcu);
                    }
                    else
                    {
                        wr32(sp0 - 0x98u, 0u);
                        wr32(sp0 - 0x94u, 0u);
                        wr32(sp0 - 0xa8u, in_edi);
                        eax = arg4;
                        ecx = 0u;
                        esi = arg4 + arg2 - 0x60u;
                        cf = 0u;
                        pf = PARITY(0u);
                        zf = 1u;
                        sf = 0u;
                        of = 0u;
                        loc_98 = 0u;
                        loc_94 = 0u;
L_10208e72: ;
                        if ((rd32(rd32(ebx + 0x14dcu)) >> (ecx & 0x1fu) & 0xfu) == 0u)
                        {
                            edx = rd32(ebx + 0x14dcu);
                        }
                        else
                        {
                            edx = rd32(ebx + 0x14dcu);
                            edi = rd32(rd32(ebx + 0x14dcu)) >> (ecx & 0x1fu) & 0xfu;
                            if ((int32_t)edi > 0)
                            {
                                ebx = loc_98 + 0x1fu;
L_10208e8c: ;
                                wr32(sp0 - 0xacu, ebx);
                                wr32(sp0 - 0xb0u, 0xefu);
                                wr32(sp0 - 0xb4u, COW_IMG(0x1036fef0u));
                                wr32(sp0 - 0xb8u, sp0 - 0x80u);
                                g->ecx = sp0 - 0x80u;
                                g->esp = sp0 - 0xa4u;
                                t14 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x1036fef0u), 0xefu, ebx, in_edi);
                                t15 = g->ecx;
                                wr32(sp0 - 0xbcu, 0x80808080u);
                                wr32(sp0 - 0xc0u, 0u);
                                wr32(sp0 - 0xc4u, sp0 - 0x80u);
                                wr32(sp0 - 0xc8u, arg3);
                                wr32(sp0 - 0xccu, esi);
                                g->edx = sp0 - 0x80u;
                                g->esp = sp0 - 0xa0u;
                                t16 = cow_cdecl(g, COW_IMG(0x10129f00u), 11, esi, arg3, sp0 - 0x80u, 0u, 0x80808080u, sp0 - 0x80u, COW_IMG(0x1036fef0u), 0xefu, rd32(sp0 - 0xacu), in_edi, rd32(sp0 - 0xa4u));
                                t17 = g->edx;
                                if (edi != 1u)
                                {
                                    edx = t17;
                                    esi = esi + 0x10u;
                                    edi = edi - 1u;
                                    goto L_10208e8c;
                                }
                                eax = t16;
                                edx = t17;
                                esi = esi + 0x10u;
                                ecx = rd32(sp0 - 0x94u);
                                ebx = rd32(sp0 - 0x90u);
                            }
                        }
                        wr32(sp0 - 0x98u, loc_98 + 1u);
                        wr32(sp0 - 0x94u, ecx + 4u);
                        if ((int32_t)(ecx + 4u) <= 28)
                        {
                            cf = ecx + 4u < 0x1cu;
                            pf = PARITY((uint8_t)(ecx - 0x18u));
                            zf = ecx == 0x18u;
                            sf = (int32_t)(ecx - 0x18u) < 0;
                            of = ((ecx + 4u ^ 0x1cu) & (ecx + 4u ^ ecx - 0x18u)) >> 0x1fu;
                            loc_98 = loc_98 + 1u;
                            loc_94 = ecx + 4u;
                            ecx = ecx + 4u;
                            goto L_10208e72;
                        }
                    }
                }
            }
            g->edx = edx;
            g->esp = sp0 - 0xa4u;
            cow_thiscall(g, COW_IMG(0x1018d250u), sp0 - 0x8cu, 0);
            t18 = g->edx;
            edx = t18;
            ebp = rd32(sp0 - 0xa0u);
            esi = rd32(sp0 - 0xa4u);
        }
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->ebp = ebp;
    g->edx = edx;
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10208d90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10208d90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
