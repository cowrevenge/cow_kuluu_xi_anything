/* f_0x101ae600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101ae600(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 2072u);

    wr32(sp0 - 0x804u, in_ebx);
    wr32(sp0 - 0x808u, in_esi);
    wr32(sp0 - 0x80cu, in_edi);
    wr32(sp0 - 0x810u, 0x400u);
    wr32(sp0 - 0x814u, sp0 - 0x800u);
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10662d40u));
    g->esp = sp0 - 0x80cu;
    t2 = cow_thiscall(g, COW_IMG(0x101b5bc0u), t1, 2, sp0 - 0x800u, 0x400u);
    t3 = g->ecx;
    t4 = g->edx;
    if (rd8(sp0 - 0x800u) == 0u)
    {
        eax = (t2 & 0xffffff00u) | rd8(sp0 - 0x800u);
        ecx = t3;
        edx = t4;
        ebx = 0u;
        goto L_101ae635;
    }
    eax = (t2 & 0xffffff00u) | rd8(sp0 - 0x800u);
    ecx = t3;
    edx = t4;
    ebx = 0u;
L_101ae628: ;
    if ((uint8_t)eax != 0x20u) goto L_101ae635;
    if (rd8(ebx + sp0 - 0x7ffu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x7ffu);
        ebx = ebx + 1u;
        goto L_101ae628;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x7ffu);
    ebx = ebx + 1u;
L_101ae635: ;
    if (rd8(ebx + sp0 - 0x800u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x800u);
        edi = ebx + sp0 - 0x800u;
        goto L_101ae64f;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + sp0 - 0x800u);
L_101ae641: ;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101ae5f0u), eax, ecx, edx);
    return;
L_101ae64f: ;
    if ((uint8_t)eax != 0x2fu) goto L_101ae706;
    ecx = 0u;
    edx = edi;
L_101ae65b: ;
    if ((uint8_t)eax == 0x20u) goto L_101ae66f;
    wr8(ecx + sp0 - 0x400u, (uint8_t)eax);
    if (rd8(edx + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edx + 1u);
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_101ae65b;
    }
    ecx = ecx + 1u;
    edx = edx + 1u;
L_101ae66f: ;
    wr8(ecx + sp0 - 0x400u, 0u);
    wr32(sp0 - 0x810u, sp0 - 0x400u);
    g->ebx = ebx;
    g->esp = sp0 - 0x80cu;
    t5 = cow_call_regs(g, COW_IMG(0x101ae720u), g->eax, sp0 - 0x400u, edx, 1, 1, sp0 - 0x400u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101ae706;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    if (rd8(edi) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        esi = ebx;
        goto L_101ae6af;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    esi = ebx;
L_101ae693: ;
    if ((uint8_t)eax == 0x20u) goto L_101ae6af;
    t8 = (edx & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    wr32(sp0 - 0x810u, t8);
    wr32(sp0 - 0x814u, eax);
    g->ecx = ecx;
    g->edx = t8;
    g->esp = sp0 - 0x80cu;
    t9 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, eax, t8);
    t10 = g->ecx;
    t11 = g->edx;
    if (rd8(esi + sp0 + t9 - 0x800u) != 0u)
    {
        eax = (t9 & 0xffffff00u) | rd8(esi + sp0 + t9 - 0x800u);
        ecx = t10;
        edx = t11;
        esi = esi + t9;
        goto L_101ae693;
    }
    eax = (t9 & 0xffffff00u) | rd8(esi + sp0 + t9 - 0x800u);
    ecx = t10;
    edx = t11;
    esi = esi + t9;
L_101ae6af: ;
    if (rd8(ebx + sp0 - 0x7ffu) != 0x74u) goto L_101ae6e3;
    if (rd8(esi + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
        goto L_101ae641;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
    if (rd8(esi + sp0 - 0x7ffu) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
        esi = esi + 1u;
        goto L_101ae6e3;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    esi = esi + 1u;
L_101ae6c7: ;
    if ((uint8_t)eax == 0x20u) goto L_101ae6e3;
    t12 = (ecx & 0xffffff00u) | rd8(esi + sp0 - 0x7ffu);
    wr32(sp0 - 0x810u, t12);
    wr32(sp0 - 0x814u, eax);
    g->ecx = t12;
    g->edx = edx;
    g->esp = sp0 - 0x80cu;
    t13 = cow_cdecl(g, COW_IMG(0x1018fa80u), 2, eax, t12);
    t14 = g->ecx;
    t15 = g->edx;
    if (rd8(esi + sp0 + t13 - 0x800u) != 0u)
    {
        eax = (t13 & 0xffffff00u) | rd8(esi + sp0 + t13 - 0x800u);
        ecx = t14;
        edx = t15;
        esi = esi + t13;
        goto L_101ae6c7;
    }
    eax = (t13 & 0xffffff00u) | rd8(esi + sp0 + t13 - 0x800u);
    ecx = t14;
    edx = t15;
    esi = esi + t13;
L_101ae6e3: ;
    if (rd8(esi + sp0 - 0x800u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
        goto L_101ae641;
    }
    eax = (eax & 0xffffff00u) | rd8(esi + sp0 - 0x800u);
    t16 = esi + sp0 - 0x7ffu;
    wr32(sp0 - 0x810u, t16);
    g->esp = sp0 - 0x80cu;
    cow_cdecl(g, COW_IMG(0x101ae790u), 1, t16);
    g->ebx = rd32(sp0 - 0x804u);
    g->esi = rd32(sp0 - 0x808u);
    g->edi = rd32(sp0 - 0x80cu);
    return;
L_101ae706: ;
    wr32(sp0 - 0x810u, edi);
    g->esp = sp0 - 0x80cu;
    cow_cdecl(g, COW_IMG(0x101ae790u), 1, edi);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ae600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101ae600(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
