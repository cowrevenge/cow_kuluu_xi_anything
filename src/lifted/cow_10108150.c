/* f_0x10108150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10108150(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_68;
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
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x44u, 0u);
    if (rd16(COW_IMG(0x104e0afcu)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x5cu, in_ebx);
        wr32(sp0 - 0x60u, in_esi);
        wr32(sp0 - 0x64u, in_edi);
        t1 = rd32(COW_IMG(0x104e0b00u)) + 4u;
        wr32(sp0 - 0x40u, t1);
        ecx = self;
        edx = in_edx;
        ebx = t1;
        loc_44 = 0u;
        loc_40 = t1;
L_10108176: ;
        wr32(sp0 - 0x4cu, rd32(ebx));
        if (rd32(ebx) == 0u) goto L_101082b4;
        eax = rd32(ebx);
        loc_4c = rd32(ebx);
L_10108184: ;
        t2 = rd32(loc_4c + 4u);
        wr32(sp0 - 0x34u, t2);
        wr32(sp0 - 0x54u, loc_4c + 0x14u);
        if (loc_4c + 0x14u == 0u)
        {
            ecx = loc_4c + 0x14u;
            esi = loc_4c;
            edi = t2;
        }
        else
        {
            ecx = loc_4c + 0x14u;
            esi = loc_4c;
            loc_34 = t2;
            loc_54 = loc_4c + 0x14u;
L_101081a4: ;
            if (rd32(ecx) == 0u)
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
                edx = rd32(ecx);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)(rd16(ecx + 6u) - 8u);
                edx = rd32(ecx);
                if ((uint16_t)eax != 0u)
                {
                    wr32(sp0 - 0x50u, 0u);
                    wr32(sp0 - 0x3cu, (uint16_t)eax);
                    t3 = (uint16_t)(((eax & 0xffff0000u) | (uint16_t)((uint16_t)eax - 1u) >> 3u) + 1u);
                    wr32(sp0 - 0x48u, t3);
                    loc_50 = 0u;
                    loc_3c = (uint16_t)eax;
                    loc_48 = t3;
L_101081df: ;
                    ebp = 0u;
L_101081e1: ;
                    if ((int32_t)(loc_50 + (uint16_t)ebp) >= (int32_t)loc_3c) goto L_10108258;
                    eax = loc_50 + (uint16_t)ebp;
                    edx = loc_3c;
                    esi = (uint16_t)ebp;
                    t4 = rd8(eax + ecx + 8u);
                    wr8(sp0 - 0x38u, (uint8_t)t4);
                    t5 = (uint8_t)rd32(sp0 - 0x38u);
                    wr32(sp0 - 0x68u, t5);
                    wr32(sp0 - 0x6cu, COW_IMG(0x1036be9cu));
                    t6 = esi * 3u + sp0 - 0x20u;
                    wr32(sp0 - 0x70u, t6);
                    g->eax = esi + sp0 - 0x20u;
                    g->ecx = t6;
                    g->edx = edx;
                    g->esp = sp0 - 0x5cu;
                    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, t6, COW_IMG(0x1036be9cu), t5, in_edi, in_esi);
                    t8 = g->ecx;
                    t9 = g->edx;
                    wr32(sp0 - 0x74u, t5);
                    g->esp = sp0 - 0x70u;
                    t10 = cow_thiscall_cdecl(g, COW_IMG(0x1031486fu), t8, 1, t5);
                    t11 = g->ecx;
                    if (t10 != 0u)
                    {
                        eax = (t10 & 0xffffff00u) | (uint8_t)t4;
                        ecx = t11;
                        ebx = (ebx & 0xffffff00u) | t4;
                    }
                    else
                    {
                        eax = (t10 & 0xffffff00u) | (uint8_t)t4;
                        ecx = t11;
                        ebx = (ebx & 0xffffff00u) | t4;
                        eax = (eax & 0xffffff00u) | 0x2eu;
                    }
                    if ((uint16_t)ebp >= 4u)
                    {
                        esi = esi + 1u;
                    }
                    wr32(sp0 - 0x68u, (uint8_t)eax);
                    wr32(sp0 - 0x6cu, COW_IMG(0x1036be98u));
                    t12 = esi + sp0 - 0x30u;
                    wr32(sp0 - 0x70u, t12);
                    g->esp = sp0 - 0x5cu;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, t12, COW_IMG(0x1036be98u), (uint8_t)eax, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                    if ((uint16_t)(ebp + 1u) < 8u)
                    {
                        ecx = rd32(sp0 - 0x54u);
                        ebp = ebp + 1u;
                        goto L_101081e1;
                    }
                    ecx = rd32(sp0 - 0x54u);
L_10108258: ;
                    wr32(sp0 - 0x50u, loc_50 + 8u);
                    wr32(sp0 - 0x48u, loc_48 - 1u);
                    if (loc_48 != 1u)
                    {
                        loc_50 = loc_50 + 8u;
                        loc_48 = loc_48 - 1u;
                        goto L_101081df;
                    }
                    eax = loc_48 - 1u;
                    edx = loc_50 + 8u;
                    esi = loc_4c;
                }
            }
            wr32(sp0 - 0x68u, ecx);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x64u;
            t13 = cow_thiscall(g, COW_IMG(0x10108870u), esi, 1, ecx);
            t14 = g->ecx;
            t15 = g->edx;
            wr32(sp0 - 0x54u, t13);
            if (t13 != 0u)
            {
                eax = t13;
                loc_54 = t13;
                goto L_101081a0;
            }
            ecx = t14;
            edx = t15;
            ebx = rd32(sp0 - 0x40u);
            edi = rd32(sp0 - 0x34u);
        }
        wr32(sp0 - 0x68u, esi);
        if (rd32(ebx + 8u) == 0u)
        {
            eax = rd32(ebx + 8u);
            loc_68 = esi;
            g->eax = eax;
            g->esp = sp0 - 0x5cu;
            t19 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, loc_68, in_edi, in_esi);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
        }
        else
        {
            eax = rd32(ebx + 8u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x68u;
            t16 = cow_thiscall(g, eax, ecx, 0);
            t17 = g->ecx;
            t18 = g->edx;
            eax = t16;
            ecx = t17;
            edx = t18;
        }
        wr32(sp0 - 0x4cu, edi);
        if (edi != 0u)
        {
            loc_4c = edi;
            goto L_10108184;
        }
L_101082b4: ;
        wr32(ebx, 0u);
        wr32(sp0 - 0x44u, loc_44 + 1u);
        wr32(sp0 - 0x40u, ebx + 0x14u);
        if ((uint16_t)(loc_44 + 1u) < rd16(COW_IMG(0x104e0afcu)))
        {
            loc_44 = loc_44 + 1u;
            loc_40 = ebx + 0x14u;
            ebx = ebx + 0x14u;
            goto L_10108176;
        }
    }
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x104e0b00u)));
    g->esp = sp0 - 0x58u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, rd32(COW_IMG(0x104e0b00u)));
    wr16(COW_IMG(0x104e0afcu), 0u);
    wr32(COW_IMG(0x104e0b00u), 0u);
    return;
L_101081a0: ;
    ecx = loc_54;
    goto L_101081a4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10108150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10108150(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
