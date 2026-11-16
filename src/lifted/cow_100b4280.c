/* f_0x100b4280 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b4280(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, sp0 - 6u);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, 2u);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 2u);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, t1);
    g->esp = sp0 - 0x10u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 6u);
    t4 = g->ecx;
    if ((uint8_t)t3 != 1u) goto L_100b433a;
    ecx = t4;
    t5 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t5);
    g->ecx = ecx;
    g->edx = t5;
    g->esp = sp0;
    t6 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t5, in_edi, in_esi, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t7 = g->ecx;
    t8 = g->edx;
    t9 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t9);
    g->esp = sp0 - 4u;
    t10 = cow_cdecl(g, COW_IMG(0x100b3660u), 5, t9, rd32(sp0 - 0x14u), in_edi, in_esi, rd32(sp0 - 8u));
    if (t6 == 0u) goto L_100b433a;
    eax = t10;
    edi = t6;
    if (eax == 0u) goto L_100b433a;
    if (rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u) == 0u) goto L_100b433a;
    ecx = rd32(COW_IMG(0x10480af0u) + rd32(edi) * 4u);
    if (rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u) == 0u) goto L_100b433a;
    eax = rd32(COW_IMG(0x10480af0u) + rd32(eax) * 4u);
    if (!(rd32(ecx + 0x120u) >> 7u & 1u)) goto L_100b433a;
    if (!(rd32(eax + 0x120u) >> 7u & 1u)) goto L_100b433a;
    eax = rd32(eax + 0x120u) >> 7u;
    if ((int8_t)rd8(ecx + 0x120u) >= 0) goto L_100b433a;
    wr32(sp0 - 0x14u, in_ebx);
    t11 = rd8(rd16(self + 0x256u) + rd32(self + 0x20u) + 1u);
    wr32(sp0 - 0x18u, t11);
    t12 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    t13 = cow_thiscall(g, COW_IMG(0x100b3690u), rd32(ecx + 0xd4u), 1, t11);
    if (t13 != 0u) goto L_100b433a;
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_100b433a: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 6u));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b4280(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b4280(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
