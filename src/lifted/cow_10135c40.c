/* f_0x10135c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10135c40(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t pf;
    uint32_t sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x1cu) != 2u)
    {
        eax = rd32(self + 0x1cu);
        goto L_10135c5f;
    }
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10131840u), 1, arg1);
    return;
L_10135c5f: ;
    if (eax != 1u) goto L_10135d5d;
    if (rd16(self + 0x20u) != 0u) goto L_10135c84;
    eax = (eax & 0xffff0000u) | rd16(self + 0x20u);
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x10131840u), 1, arg1);
    return;
L_10135c84: ;
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 0)
    {
        ebx = 0u;
        esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
    }
    else
    {
        eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
        esi = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        eax = (uint32_t)(int16_t)eax;
        ebx = 0u;
L_10135c98: ;
        if (rd8(COW_IMG(0x1036f744u) + ebx) == eax) goto L_10135ca9;
        if ((int32_t)(ebx + 1u) <= (int32_t)esi)
        {
            ebx = ebx + 1u;
            goto L_10135c98;
        }
        ebx = ebx + 1u;
    }
L_10135ca9: ;
    if ((uint16_t)arg1 != 4u) goto L_10135cfb;
    if ((int32_t)(ebx + esi - 1u) <= (int32_t)ebx) goto L_10135d5d;
    edi = ebx + esi - 1u;
L_10135cbf: ;
    t1 = cow_divs(g, edi, esi);
    t2 = cow_mods(g, edi, esi);
    t3 = (t1 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t2);
    g->eax = t3;
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t4 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t3);
    t5 = g->ecx;
    if ((int16_t)t4 < 0) goto L_10135cef;
    eax = t4;
    ecx = t5;
    pf = PARITY((uint8_t)t4);
    zf = (uint16_t)t4 == 0u;
    sf = (int16_t)t4 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u) goto L_10135d46;
L_10135cef: ;
    if ((int32_t)(edi - 1u) > (int32_t)ebx)
    {
        edi = edi - 1u;
        goto L_10135cbf;
    }
    return;
L_10135cfb: ;
    if ((uint16_t)arg1 != 3u) goto L_10135d5d;
    if ((int32_t)(ebx + 1u) >= (int32_t)(ebx + esi)) goto L_10135d5d;
    ecx = self;
    edi = ebx + 1u;
    ebx = ebx + esi;
L_10135d0a: ;
    t6 = cow_divs(g, edi, esi);
    t7 = cow_mods(g, edi, esi);
    t8 = (ecx & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t7);
    g->eax = t6;
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t9 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t8);
    t10 = g->ecx;
    if ((int16_t)t9 < 0)
    {
        ecx = t10;
        goto L_10135d3a;
    }
    eax = t9;
    ecx = t10;
    pf = PARITY((uint8_t)t9);
    zf = (uint16_t)t9 == 0u;
    sf = (int16_t)t9 < 0;
    if ((rd16(self + 0x20u) & 1u << (eax & 0x1fu)) != 0u) goto L_10135d46;
    ecx = (ecx & 0xffffff00u) | (uint8_t)eax;
L_10135d3a: ;
    if ((int32_t)(edi + 1u) < (int32_t)ebx)
    {
        edi = edi + 1u;
        goto L_10135d0a;
    }
    return;
L_10135d46: ;
    t11 = cow_divs(g, edi, esi);
    t12 = cow_mods(g, edi, esi);
    t13 = (t11 & 0xffff0000u) | rd8(COW_IMG(0x1036f744u) + t12);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10131810u), self, 2, t13, 1u);
L_10135d5d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10135c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10135c40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
