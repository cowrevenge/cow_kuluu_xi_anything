/* f_0x1012fa10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1012fa10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    eax = rd32(COW_IMG(0x104dfd98u)) + 0x2c7d8u;
    esi = 0u;
L_1012fa22: ;
    if (rd32(eax) == 1u)
    {
        ecx = rd32(eax) - 1u;
        goto L_1012fa32;
    }
    if ((int32_t)(esi + 1u) < 8)
    {
        eax = eax + 0x48u;
        esi = esi + 1u;
        goto L_1012fa22;
    }
    eax = eax + 0x48u;
    edx = in_edx & 0xffffff00u;
L_1012fa6c: ;
    t3 = rd32(self + 8u);
    wr32(self + 0x1c0u, 0xffffffffu);
    wr8(t3 + 0x5du, 0u);
    wr32(self + 0x1bcu, 0xffffffffu);
    if ((uint8_t)edx == 0u) goto L_1012fa92;
    wr16(self + 0x1b4u, 0x1au);
    return;
L_1012fa32: ;
    g->edx = in_edx & 0xffffff00u;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7d10u), 2, 2u, esi);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = (t2 & 0xffffff00u) | 1u;
        eax = eax & 0xffffff00u;
    }
    else
    {
        eax = t1;
        edx = (t2 & 0xffffff00u) | 1u;
        wr8(rd32(self + 8u) + 0x5du, (uint8_t)edx);
        wr32(self + 0x1bcu, esi);
        wr32(self + 0x1c0u, 0x12cu);
        wr16(self + 0x1b4u, 0xeu);
        eax = (eax & 0xffffff00u) | (uint8_t)edx;
    }
    if ((uint8_t)eax != 0u) goto L_1012fa9b;
    goto L_1012fa6c;
L_1012fa92: ;
    wr16(self + 0x1b4u, 5u);
L_1012fa9b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012fa10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012fa10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
