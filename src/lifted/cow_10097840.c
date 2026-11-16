/* f_0x10097840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10097840(Guest* g)
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
    uint32_t t2;
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
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr8(sp0 - 8u, 0u);
    wr8(sp0 - 7u, 0u);
    wr8(sp0 - 6u, 0u);
    wr8(sp0 - 5u, 0u);
    wr8(COW_IMG(0x104855b0u), 0u);
    g->esp = sp0 - 0x10u;
    t1 = cow_fastcall(g, COW_IMG(0x100977f0u), self, in_edx, 0);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        esi = in_esi;
        edi = in_edi;
        goto L_10097996;
    }
    eax = t1;
    edx = t2;
    if ((rd32(self + 0x78u) & 0xff000000u) == 0u)
    {
        if ((rd32(self + 0x124u) & 0x8000000u) != 0u)
        {
            wr8(sp0 - 8u, 0x92u);
        }
    }
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, 0u);
    esi = 0u;
    edi = sp0 - 8u;
L_10097892: ;
    t3 = (eax & 0xffffff00u) | rd8(esi + sp0 - 8u);
    wr32(sp0 - 0x1cu, t3);
    wr32(sp0 - 0x20u, esi);
    g->eax = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_fastcall(g, COW_IMG(0x10097500u), self, edx, 2, esi, t3);
    t5 = g->edx;
    wr8(edi, (uint8_t)t4);
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        edx = t5;
    }
    else
    {
        eax = t4;
        edx = t5;
        edi = edi + 1u;
    }
    if (esi + 1u < 2u)
    {
        esi = esi + 1u;
        goto L_10097892;
    }
    edx = 0u;
    edi = rd32(sp0 - 4u);
L_100978b2: ;
    wr32(sp0 - 0x1cu, edx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, COW_IMG(0x10097730u), self, 1, edx);
    t7 = g->edx;
    wr8(edi + sp0 - 6u, (uint8_t)t6);
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        edi = edi + 1u;
    }
    if (edx + 1u < 2u)
    {
        edx = edx + 1u;
        goto L_100978b2;
    }
    edx = edx + 1u;
    g->esp = sp0 - 0x18u;
    t8 = cow_call_regs(g, COW_IMG(0x100977a0u), eax, self, edx, 1, 0);
    t9 = g->edx;
    if ((uint8_t)t8 == 0u)
    {
        eax = t8;
        edx = t9;
        esi = 0u;
    }
    else
    {
        eax = t8;
        edx = t9;
        if (rd8(sp0 - 8u) != 0xabu)
        {
            wr8(sp0 - 8u, 0u);
        }
        wr8(COW_IMG(0x104855b0u), (uint8_t)eax);
        esi = 1u;
    }
    ecx = 0u;
    edx = edx & 0xffffff00u;
L_100978f1: ;
    if (rd8(ecx + sp0 - 8u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 8u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 8u);
        wr8(COW_IMG(0x104855b0u) + esi, (uint8_t)eax);
        edx = (edx & 0xffffff00u) | 1u;
        esi = esi + 1u;
    }
    if (ecx + 1u < 2u)
    {
        ecx = ecx + 1u;
        goto L_100978f1;
    }
    ecx = ecx + 1u;
    if ((uint8_t)edx != 0u)
    {
        if (edi == 0u)
        {
            ecx = 0u;
            goto L_10097926;
        }
        ecx = 0u;
L_10097912: ;
        if (rd8(ecx + sp0 - 6u) == 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 6u);
        }
        else
        {
            eax = (eax & 0xffffff00u) | rd8(ecx + sp0 - 6u);
            wr8(COW_IMG(0x104855b0u) + esi, (uint8_t)eax);
            esi = esi + 1u;
        }
        if (ecx + 1u < edi)
        {
            ecx = ecx + 1u;
            goto L_10097912;
        }
        ecx = ecx + 1u;
L_10097926: ;
        wr8(COW_IMG(0x104855b0u) + esi, 0x20u);
        esi = esi + 1u;
    }
    wr8(COW_IMG(0x104855b0u) + esi, 0u);
    if (rd16(self + 0x210u) != 0u)
    {
        eax = self + 0x214u;
        esi = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
    }
    else
    {
        esi = rd32(sp0 - 0x14u);
        edi = rd32(sp0 - 0x18u);
        eax = self + 0x7cu;
    }
    wr32(sp0 - 0x14u, 0x80u);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, COW_IMG(0x104855b0u));
    g->esp = sp0 - 0x10u;
    t10 = cow_call_regs(g, COW_IMG(0x10313560u), eax, g->ecx, edx, 1, 3, COW_IMG(0x104855b0u), eax, 0x80u);
    if (rd8(sp0 - 8u) != 0x92u) goto L_10097983;
    t11 = rd32(self + 0x1d4u);
    t12 = rd32(sp0 - 0x10u);
    wr32(rd32(self + 0xa0u) + 0x7cu, t11);
    wr8(COW_IMG(0x1048562fu), 0u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = esi;
    g->edi = edi;
    g->ebp = t12;
    return COW_IMG(0x104855b0u);
L_10097983: ;
    wr32(rd32(self + 0xa0u) + 0x7cu, 0x80808080u);
    wr8(COW_IMG(0x1048562fu), 0u);
L_10097996: ;
    g->esi = esi;
    g->edi = edi;
    return COW_IMG(0x104855b0u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10097840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10097840(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
