/* f_0x100b7c40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b7c40(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 8u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, t1);
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 8u);
    if ((uint8_t)t3 != 1u) goto L_100b7cb7;
    t4 = rd32(sp0 - 8u);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t4 * 4u) == 0u) goto L_100b7cb7;
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t4 * 4u);
    edx = (uint16_t)t4;
    edi = t4;
    if (!(rd32(eax + 0x120u) >> 9u & 1u)) goto L_100b7cb7;
    ecx = rd32(eax + 0x120u) >> 9u;
    if (rd8(eax + 0x1bcu) != 0u) goto L_100b7cc5;
    wr32(sp0 - 0x14u, 5u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, COW_IMG(0x100af4b0u), self, 1, 5u);
    t6 = g->ecx;
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, (uint32_t)((int32_t)t5 >> 8u));
    wr32(sp0 - 0x20u, (uint8_t)t5);
    wr32(sp0 - 0x24u, edi);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x100a0b60u), 9, edi, (uint8_t)t5, (uint32_t)((int32_t)t5 >> 8u), 0u, 1u, in_edi, in_esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
L_100b7cb7: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 7u));
    return;
L_100b7cc5: ;
    wr8(self + 0x25au, 1u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b7c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b7c40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
