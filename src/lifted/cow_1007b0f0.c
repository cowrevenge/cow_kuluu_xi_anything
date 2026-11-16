/* f_0x1007b0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1007b0f0(Guest* g)
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
    uint32_t t2;
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
    cow_frame(g, sp0, 112u);

    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_edi);
    if (rd8(rd32(sp0 + 8u) + 6u) == 0u)
    {
        ebp = rd32(sp0 + 8u);
        goto L_1007b112;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 8u) + 6u);
    ebp = rd32(sp0 + 8u);
    wr32(sp0 - 0x60u, ebp + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_call_regs(g, COW_IMG(0x10077e90u), eax, g->ecx, g->edx, 1, 1, ebp + 8u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1007b112: ;
    t3 = rd16(ebp + 4u);
    wr8(sp0 + 8u, 0u);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((uint16_t)t3 == 0u)
    {
        ebx = in_ebx;
        esi = in_esi;
        goto L_1007b1a1;
    }
    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_esi);
    ecx = COW_IMG(0x1032c9c8u);
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    edi = COW_IMG(0x1032c9c8u);
L_1007b135: ;
    t4 = (ecx & 0xffff0000u) | rd16(ebp + 4u);
    wr32(sp0 - 0x68u, t4);
    wr32(sp0 - 0x6cu, rd16(ecx));
    g->edi = edi;
    g->eax = rd16(ecx);
    g->ecx = t4;
    g->edx = edx;
    t5 = rd16(ecx);
    t6 = rd16(edi + 2u);
    g->esp = sp0 - 0x54u;
    t7 = cow_cdecl(g, COW_IMG(0x101f01e0u), 6, t5, t4, in_esi, in_ebx, in_edi, in_ebp);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t9;
    }
    else
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        esi = t6;
        if ((uint8_t)ebx != 0u)
        {
            wr16(sp0 - 0x4cu, 0x11cu);
            wr32(sp0 - 0x68u, sp0 - 0x54u);
            wr32(sp0 - 0x48u, rd16(eax));
            g->ebx = ebx;
            g->eax = sp0 - 0x54u;
            g->edx = rd16(eax);
            t10 = rd16(eax);
            g->esp = sp0 - 0x64u;
            t11 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t12 = g->edx;
            eax = t11;
            edx = t12;
            ebx = ebx & 0xffffff00u;
        }
        wr16(sp0 - 0x4cu, (uint16_t)esi);
        wr32(sp0 - 0x68u, sp0 - 0x54u);
        g->ebx = ebx;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x64u;
        t13 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t14 = g->edx;
        wr8(sp0 + 8u, 1u);
        eax = t13;
        edx = t14;
    }
    if (rd16(edi + 4u) != 0x12u)
    {
        ecx = edi + 4u;
        edi = edi + 4u;
        goto L_1007b135;
    }
    ecx = edi + 4u;
    if (rd8(sp0 + 8u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
        ebx = rd32(sp0 - 0x60u);
        esi = rd32(sp0 - 0x64u);
        goto L_1007b1b5;
    }
    eax = (eax & 0xffffff00u) | rd8(sp0 + 8u);
    ebx = rd32(sp0 - 0x60u);
    esi = rd32(sp0 - 0x64u);
L_1007b1a1: ;
    wr16(sp0 - 0x4cu, 0x11du);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = sp0 - 0x54u;
    g->esp = sp0 - 0x5cu;
    t15 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t16 = g->edx;
    eax = t15;
    edx = t16;
L_1007b1b5: ;
    g->ebx = ebx;
    g->esi = esi;
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007b0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007b0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
