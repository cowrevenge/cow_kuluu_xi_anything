/* f_0x101a7df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101a7df0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_144;
    uint32_t loc_148;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 388u);

    wr32(sp0 - 0x14cu, in_ebx);
    wr32(sp0 - 0x150u, in_ebp);
    wr32(sp0 - 0x154u, in_esi);
    if ((uint16_t)arg1 < 0xc8u)
    {
        loc_148 = (rd32(sp0 - 0x148u) & 0xffffffu) | 0x1000000u;
        loc_144 = rd32(sp0 - 0x144u) & 0xffffff00u;
        goto L_101a7e1e;
    }
    return in_eax & 0xffffff00u;
L_101a7e1e: ;
    if (rd32(COW_IMG(0x106627d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d4u));
        goto L_101a7e34;
    }
    return in_eax & 0xffffff00u;
L_101a7e34: ;
    wr32(sp0 - 0x158u, arg1);
    g->edx = in_edx;
    g->esp = sp0 - 0x154u;
    t1 = cow_thiscall(g, COW_IMG(0x101a8a60u), ecx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        ecx = t2;
        edx = t3;
        esi = t1;
        goto L_101a7e4c;
    }
    eax = t1;
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x150u);
    return eax & 0xffffff00u;
L_101a7e4c: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        ecx = t5;
        edx = t6;
        goto L_101a7e61;
    }
    eax = t4;
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x150u);
    return eax & 0xffffff00u;
L_101a7e61: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t7 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        goto L_101a7e83;
    }
    edx = t9;
    wr32(sp0 - 0x158u, 0x22u);
    g->ebx = in_ebx & 0xffffff00u;
    g->esp = sp0 - 0x154u;
    t10 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x22u);
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x150u);
    return (t10 & 0xffffff00u) | 1u;
L_101a7e83: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x154u;
    t11 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(COW_IMG(0x106627e4u), t11);
    wr32(sp0 - 0x158u, sp0 - 0x140u);
    wr32(sp0 - 0x15cu, esi);
    g->ecx = t12;
    g->esp = sp0 - 0x140u;
    cow_call_regs(g, COW_IMG(0x101a7d70u), g->eax, g->ecx, t13, 1, 7, esi, sp0 - 0x140u, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u));
    t14 = g->ecx;
    ecx = t14;
    edx = 0u;
    ebx = in_ebx & 0xffffff00u;
L_101a7e9d: ;
    wr32(sp0 - 0x158u, edx);
    g->edx = edx;
    g->esp = sp0 - 0x13cu;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101a7da0u), ecx, 7, edx, rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), loc_144, rd32(sp0 - 0x140u));
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 == 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
    }
    else
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        if ((rd8(edx * 4u + sp0 - 0x140u) & 3u) == 1u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(edx * 4u + sp0 - 0x140u);
            goto L_101a7eda;
        }
        eax = (rd8(edx * 4u + sp0 - 0x140u) & 3u) - 1u;
        ecx = (ecx & 0xffffff00u) | rd8(edx * 4u + sp0 - 0x140u);
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_101a7f08;
        }
        t18 = rd32(sp0 - 0x144u);
        wr8(sp0 + (uint8_t)t18 * 8u - 0x7bu, 0u);
        wr8(sp0 + (uint8_t)t18 * 8u - 0x7cu, 0u);
        wr16(sp0 + (uint8_t)t18 * 8u - 0x7au, 0u);
        eax = sp0 + (uint8_t)t18 * 8u - 0x80u;
        ecx = (uint8_t)t18;
L_101a7f00: ;
        wr32(eax, edx);
        loc_144 = (rd32(sp0 - 0x144u) & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
        ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
    }
L_101a7f08: ;
    if ((int32_t)(edx + 1u) < 16)
    {
        edx = edx + 1u;
        goto L_101a7e9d;
    }
    if ((uint8_t)ebx != 0u)
    {
        wr32(sp0 - 0x158u, arg2);
        wr32(sp0 - 0x15cu, sp0 - 0x80u);
        wr32(sp0 - 0x160u, loc_144);
        g->ecx = ecx;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x154u;
        t22 = cow_cdecl(g, COW_IMG(0x100e5490u), 3, loc_144, sp0 - 0x80u, arg2);
        t23 = g->ecx;
        t24 = g->edx;
        if ((uint8_t)t22 == 0u)
        {
            eax = t22;
            loc_148 = (rd32(sp0 - 0x148u) & 0xffffffu) | (uint8_t)t22 << 0x18u;
        }
        else
        {
            eax = t22;
            ecx = t23;
            edx = t24;
            loc_148 = (rd32(sp0 - 0x148u) & 0xffffffu) | (uint8_t)t22 << 0x18u;
            wr32(sp0 - 0x158u, 1u);
            wr32(sp0 - 0x15cu, 0xbfu);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x154u;
            t25 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 1u);
            t26 = g->ecx;
            t27 = g->edx;
            if ((uint8_t)arg2 == 0u)
            {
                eax = t25;
            }
            else
            {
                ecx = t26;
                edx = t27;
                wr32(sp0 - 0x158u, in_edi);
                edi = sp0 - 0xffu;
                eax = 0u;
                ecx = 0x1fu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                t28 = rd32(sp0 - 0x144u);
                wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
                t29 = (uint16_t)arg1 + 1u;
                wr32(sp0 - 0x15cu, t29);
                wr32(sp0 - 0x160u, 0x1c8u);
                wr32(sp0 - 0x164u, 0xcu);
                wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
                g->eax = eax;
                g->ecx = ecx;
                g->esp = sp0 - 0x15cu;
                t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c8u);
                t31 = g->ecx;
                wr32(sp0 - 0x160u, t30);
                wr32(sp0 - 0x164u, sp0 - 0x100u);
                g->ebx = arg2;
                g->edx = sp0 - 0x100u;
                g->esp = sp0 - 0x150u;
                cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t30, rd32(sp0 - 0x15cu), in_edi, rd32(sp0 - 0x154u));
                t32 = g->edx;
                wr32(sp0 - 0x168u, 0u);
                wr32(sp0 - 0x16cu, 0u);
                wr32(sp0 - 0x170u, 0u);
                wr32(sp0 - 0x174u, sp0 - 0x144u);
                wr32(sp0 - 0x178u, 1u);
                wr32(sp0 - 0x17cu, sp0 - 0x100u);
                wr32(sp0 - 0x180u, COW_IMG(0x103d3c84u));
                g->esp = sp0 - 0x164u;
                t33 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x144u, sp0 - 0x100u, t32, 1, 7, COW_IMG(0x103d3c84u), sp0 - 0x100u, 1u, sp0 - 0x144u, 0u, 0u, 0u);
                eax = t33;
            }
        }
    }
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x154u);
    g->ebp = rd32(sp0 - 0x150u);
    return (eax & 0xffffff00u) | loc_148 >> 0x18u;
L_101a7eda: ;
    t19 = rd32(sp0 - 0x144u);
    wr8(sp0 + (uint8_t)t19 * 8u - 0x7bu, (uint8_t)ecx >> 2u);
    t20 = rd8(edx * 4u + sp0 - 0x13fu);
    wr8(sp0 + (uint8_t)t19 * 8u - 0x7cu, (uint8_t)t20);
    t21 = rd16(edx * 4u + sp0 - 0x13eu);
    wr16(sp0 + (uint8_t)t19 * 8u - 0x7au, (uint16_t)t21);
    eax = sp0 + (uint8_t)t19 * 8u - 0x80u;
    ecx = ((ecx | t20) & 0xffff0000u) | t21;
    goto L_101a7f00;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a7df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
