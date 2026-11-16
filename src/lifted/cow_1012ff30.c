/* f_0x1012ff30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012ff30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr8(rd32(self + 8u) + 0x5du, 1u);
    edx = in_edx;
    esi = 0x2c7d8u;
    edi = 0u;
    loc_4 = 0u;
    loc_8 = rd32(sp0 - 8u) & 0xffffffu;
L_1012ff50: ;
    if (rd32(esi + rd32(COW_IMG(0x104dfd98u))) == 1u)
    {
        eax = rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u;
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_1012ff61;
    }
    eax = rd32(esi + rd32(COW_IMG(0x104dfd98u))) - 1u;
    ecx = rd32(COW_IMG(0x104dfd98u));
    if (eax != 0xfu) goto L_1012ff7d;
    eax = eax - 0xfu;
L_1012ff61: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x100f7e70u), eax, g->ecx, g->edx, 1, 3, 2u, edi, 0xffffffffu);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t2;
        loc_8 = (loc_8 & 0xffffffu) | 0x1000000u;
    }
    else
    {
        edx = t2;
        loc_4 = loc_4 + 1u;
    }
L_1012ff7d: ;
    if ((int32_t)(esi + 0x48u) < 182808)
    {
        esi = esi + 0x48u;
        edi = edi + 1u;
        goto L_1012ff50;
    }
    if (loc_4 == 0u)
    {
        eax = loc_4;
        goto L_1012ffab;
    }
    wr32(self + 0x1c0u, 0x12cu);
    wr16(self + 0x1b4u, 0x17u);
    return;
L_1012ffab: ;
    if (loc_8 >> 0x18u == 0u)
    {
        eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
    }
    else
    {
        eax = (eax & 0xffffff00u) | loc_8 >> 0x18u;
        if (rd32(COW_IMG(0x10578158u)) != 0u)
        {
            ecx = rd32(COW_IMG(0x10578158u));
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t3 = cow_thiscall(g, COW_IMG(0x10129e30u), ecx, 1, 0x85u);
            eax = t3;
        }
    }
    t4 = rd32(self + 8u);
    wr32(self + 0x1c0u, 0xffffffffu);
    wr8(t4 + 0x5du, 0u);
    wr16(self + 0x1b4u, rd16(self + 0x1b6u));
    wr16(self + 0x1b6u, 0x18u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012ff30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012ff30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
