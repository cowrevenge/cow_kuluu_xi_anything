/* f_0x1013d1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1013d1f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
        edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ebp = (uint32_t)(int16_t)rd16(self + 0x34eu) + 3u;
        esi = (uint8_t)rd32(sp0 + 8u) - 0xau;
        goto L_1013d22b;
    }
    eax = (uint32_t)(int16_t)rd16(self + 0x34eu);
    edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ebp = (uint32_t)(int16_t)rd16(self + 0x34eu) + 3u;
    esi = (uint8_t)rd32(sp0 + 8u) - 0xau;
    if (edx == 2u) goto L_1013d234;
    if (edx == 3u) goto L_1013d234;
L_1013d22b: ;
    if (edx != 0u) goto L_1013d234;
    if ((uint8_t)arg1 >= 3u) goto L_1013d237;
L_1013d234: ;
    ebp = eax + 0x33u;
L_1013d237: ;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x1015b1f0u), rd32(self + 0x1cu), 2, 0u, esi);
    t2 = g->edx;
    wr32(sp0 + 8u, t1);
    if (t1 != 0u)
    {
        edx = t2;
        g->esp = sp0 - 0x10u;
        t3 = cow_thiscall(g, COW_IMG(0x1015b240u), rd32(self + 0x1cu), 2, 0u, esi);
        if ((int32_t)t3 > 0)
        {
            eax = t3;
            t4 = rd32(sp0 + 8u);
            t5 = (uint8_t)arg1 * 0x10u + (uint32_t)(int16_t)rd16(self + 0x350u) + 4u;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x10129f00u), 5, ebp, t5, t4, eax, 0x80808080u);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013d1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013d1f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
