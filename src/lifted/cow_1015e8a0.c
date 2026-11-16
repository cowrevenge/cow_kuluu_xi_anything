/* f_0x1015e8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1015e8a0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    if (rd32(sp0 + 4u) == 0u) goto L_1015e908;
    edi = rd32(sp0 + 4u);
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
    t2 = g->edx;
    wr32(sp0 + 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1015e8d6;
    }
    edx = t2;
L_1015e8b9: ;
    wr32(sp0 - 0xcu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
    t4 = g->edx;
    if (edi == t3)
    {
        eax = t3;
        edx = t4;
        goto L_1015e8d6;
    }
    edx = t4;
    if (rd32(sp0 + 4u) != 0u) goto L_1015e8b9;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    return;
L_1015e8d6: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x101180f0u), edi, 0);
    t6 = g->edx;
    wr32(sp0 - 0xcu, edi);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x1015dbd0u), self, 1, edi);
    t8 = g->edx;
    t9 = cow_fastcall(g, COW_IMG(0x10118f40u), edi, t8, 0);
    t10 = g->edx;
    if (rd32(self + 0x58u) != edi)
    {
        eax = t9;
        edx = t10;
    }
    else
    {
        eax = t9;
        edx = t10;
        wr32(self + 0x58u, 0u);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x10117460u), edi, 0);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(sp0 - 0xcu, edi);
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, edi);
L_1015e908: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1015e8a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
