/* f_0x101a7930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_101a7930(Guest* g)
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_ebp);
    wr32(sp0 - 0x60u, in_esi);
    wr32(sp0 - 0x64u, in_edi);
    t1 = rd32(sp0 + 8u);
    ecx = self;
    edx = in_edx;
    ebx = rd32(sp0 + 4u) - t1;
    ebp = 0x10u;
    esi = t1;
    edi = t1;
L_101a7948: ;
    wr32(sp0 - 0x68u, ebx + edi);
    wr32(sp0 - 0x6cu, edi);
    g->ecx = ecx;
    g->esp = sp0 - 0x5cu;
    t2 = cow_call_regs(g, COW_IMG(0x10134e90u), ebx + edi, g->ecx, edx, 1, 4, edi, ebx + edi, in_edi, in_esi);
    t3 = g->ecx;
    t4 = g->edx;
    if (ebp != 1u)
    {
        ecx = t3;
        edx = t4;
        ebp = ebp - 1u;
        edi = edi + 4u;
        goto L_101a7948;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    edi = 0u;
L_101a795d: ;
    if ((rd8(edi * 4u + esi) & 3u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi * 4u + esi);
        ecx = (ecx & 0xffffff00u) | (rd8(edi * 4u + esi) & 3u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi * 4u + esi);
        t5 = (uint8_t)eax >> 2u;
        wr32(sp0 - 0x68u, t5);
        g->eax = (uint8_t)eax;
        g->ecx = t5;
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        t6 = cow_cdecl(g, COW_IMG(0x101a76c0u), 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        if ((uint8_t)t6 == 0u)
        {
            eax = t6;
            goto L_101a7999;
        }
        eax = t6;
        ecx = t7;
        edx = t8;
        t9 = (edx & 0xffff0000u) | rd16(edi * 4u + esi + 2u);
        wr32(sp0 - 0x68u, t9);
        t10 = (eax & 0xffffff00u) | rd8(edi * 4u + esi + 1u);
        wr32(sp0 - 0x6cu, t10);
        wr32(sp0 - 0x70u, ecx);
        g->edi = edi;
        g->eax = t10;
        g->ecx = ecx;
        g->edx = t9;
        g->esp = sp0 - 0x64u;
        t11 = cow_cdecl(g, COW_IMG(0x101a7710u), 3, ecx, t10, t9);
        t12 = g->ecx;
        t13 = g->edx;
        if ((uint8_t)t11 != 0u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_101a79cd;
        }
        eax = t11;
L_101a7999: ;
        wr32(sp0 - 0x68u, esi);
        wr32(sp0 - 0x6cu, sp0 + 8u);
        t14 = rd8(edi * 4u + esi) >> 2u;
        wr32(sp0 - 0x70u, t14);
        t15 = (eax & 0xffff0000u) | rd16(edi * 4u + esi + 2u);
        wr32(sp0 - 0x74u, t15);
        wr8(sp0 + 8u, 0u);
        g->eax = t15;
        g->ecx = sp0 + 8u;
        g->edx = t14;
        g->esp = sp0 - 0x54u;
        t16 = cow_cdecl(g, COW_IMG(0x101a7810u), 8, t15, t14, sp0 + 8u, esi, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
        t17 = g->ecx;
        t18 = g->edx;
        if ((uint8_t)t16 != 1u)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            wr8(edi * 4u + esi, rd8(edi * 4u + esi) | 0xfcu);
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            t19 = rd8(sp0 + 8u);
            wr8(edi * 4u + esi + 1u, (uint8_t)t19);
            ecx = (ecx & 0xffffff00u) | t19;
        }
    }
L_101a79cd: ;
    if ((int32_t)(edi + 1u) < 16)
    {
        edi = edi + 1u;
        goto L_101a795d;
    }
    ebp = 0u;
L_101a79da: ;
    if ((rd8(ebp * 4u + esi) & 3u) != 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp * 4u + esi);
        edx = (edx & 0xffffff00u) | (rd8(ebp * 4u + esi) & 3u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ebp * 4u + esi);
        edx = (edx & 0xffffff00u) | (rd8(ebp * 4u + esi) & 3u);
        t20 = (uint8_t)eax >> 2u;
        wr32(sp0 - 0x68u, t20);
        g->eax = t20;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        t21 = cow_cdecl(g, COW_IMG(0x101a76c0u), 1, t20);
        t22 = g->ecx;
        t23 = g->edx;
        if ((uint8_t)t21 != 0u)
        {
            eax = t21;
            ecx = t22;
            edx = t23;
        }
        else
        {
            eax = t21;
            edx = t23;
            t24 = rd16(ebp * 4u + esi + 2u);
            wr8(sp0 + 8u, (uint8_t)eax);
            wr32(sp0 - 0x68u, esi);
            wr32(sp0 - 0x6cu, sp0 + 8u);
            wr32(sp0 - 0x70u, sp0 + 4u);
            t25 = (edx & 0xffff0000u) | t24;
            wr32(sp0 - 0x74u, t25);
            wr32(sp0 + 4u, 0u);
            g->eax = sp0 + 8u;
            g->ecx = sp0 + 4u;
            g->edx = t25;
            g->esp = sp0 - 4u;
            t26 = cow_bridge_indirect(g, COW_IMG(0x101a78a0u), 0u, 28u, (const uint32_t[]){t25, sp0 + 4u, sp0 + 8u, esi, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u), rd32(sp0 - 0x3cu), rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u)}, g->ecx, g->edx, g->eax, 112u);
            t27 = g->ecx;
            t28 = g->edx;
            if ((uint8_t)t26 == 0u)
            {
                eax = t26;
                ecx = t27;
                edx = t28;
                if ((uint8_t)arg3 == 0u)
                {
                    eax = (eax & 0xffffff00u) | (uint8_t)arg3;
                }
                else
                {
                    edi = sp0 - 0x54u;
                    eax = 0u;
                    ecx = 0x15u;
                    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                    wr32(sp0 - 0x68u, sp0 - 0x54u);
                    t32 = rd16(ebp * 4u + esi + 2u);
                    wr16(sp0 - 0x4cu, 0x113u);
                    t33 = (eax & 0xffff0000u) | t32;
                    wr32(sp0 - 0x48u, t33);
                    g->ebx = 0x113u;
                    g->eax = t33;
                    g->ecx = sp0 - 0x54u;
                    g->edx = edx;
                    g->esp = sp0 - 0x64u;
                    t34 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
                    t35 = g->ecx;
                    t36 = g->edx;
                    eax = t34;
                    ecx = t35;
                    edx = t36;
                }
                wr8(ebp * 4u + esi, 0u);
                wr8(ebp * 4u + esi + 1u, 0u);
                wr16(ebp * 4u + esi + 2u, 0u);
            }
            else
            {
                eax = t26;
                ecx = t27;
                edx = t28;
                t29 = rd8(sp0 + 4u);
                t30 = rd8(ebp * 4u + esi);
                t31 = rd8(sp0 + 8u);
                wr8(ebp * 4u + esi + 1u, (uint8_t)t31);
                wr8(ebp * 4u + esi, (uint8_t)((t30 & 3u) ^ t29 << 2u));
                eax = (eax & 0xffffff00u) | (uint8_t)(t29 << 2u);
                ecx = (ecx & 0xffffff00u) | (uint8_t)((t30 & 3u) ^ t29 << 2u);
                edx = (edx & 0xffffff00u) | t31;
            }
        }
    }
    if ((int32_t)(ebp + 1u) < 16)
    {
        ebp = ebp + 1u;
        goto L_101a79da;
    }
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x60u);
    g->edi = rd32(sp0 - 0x64u);
    g->ebp = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a7930(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
