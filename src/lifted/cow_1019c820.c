/* f_0x1019c820 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019c820(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + 0x28u) == 0u) goto L_1019c8e9;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x28u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x101afce0u), 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_1019c8c2;
    }
    if ((int16_t)rd16(rd32(self + 8u) + 0x4cu) <= 0) goto L_1019c8e5;
    eax = (rd32(self + 8u) & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
    if (rd8(self + (uint32_t)(int16_t)eax + rd32(self + 0x14u) + 0x28u) != rd8(self + 0x28u))
    {
        ecx = (self + (uint32_t)(int16_t)eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = (uint32_t)(int16_t)eax;
        eax = self + (uint32_t)(int16_t)eax + rd32(self + 0x14u) + 0x28u;
        goto L_1019c879;
    }
    ecx = (self + (uint32_t)(int16_t)eax & 0xffffff00u) | rd8(self + 0x28u);
    edx = (uint32_t)(int16_t)eax;
    eax = self + (uint32_t)(int16_t)eax + rd32(self + 0x14u) + 0x28u;
    wr8(eax, 0u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    wr8(self + 0x28u, 0u);
    return;
L_1019c879: ;
    wr8(eax, (uint8_t)ecx);
    if ((int32_t)rd32(self + 0x24u) <= 0)
    {
        eax = 0u;
        ecx = rd32(self + 0x24u);
        goto L_1019c8b3;
    }
    ecx = rd32(self + 0x24u);
    eax = 0u;
    edi = edx + rd32(self + 0x14u);
    edx = (edx & 0xffffff00u) | rd8(edx + self + rd32(self + 0x14u) + 0x28u);
L_1019c88d: ;
    if ((uint8_t)edx != rd8(eax + self + 0x29u)) goto L_1019c89a;
    if (edi - 1u != eax) goto L_1019c8ae;
L_1019c89a: ;
    if ((int32_t)(eax + 1u) < (int32_t)ecx)
    {
        eax = eax + 1u;
        goto L_1019c88d;
    }
    eax = eax + 1u;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    wr8(self + 0x28u, 0u);
    return;
L_1019c8ae: ;
    wr8(eax + self + 0x29u, 0u);
L_1019c8b3: ;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    wr8(self + 0x28u, 0u);
    return;
L_1019c8c2: ;
    if (rd8(self + 0x28u) - 0x1cu > 0xb4u)
    {
        eax = rd8(self + 0x28u) - 0x1cu;
        goto L_1019c8e0;
    }
    eax = rd8(self + 0x28u) - 0x1cu;
    t4 = rd32(COW_IMG(0x1019c8f0u) + rd8(COW_IMG(0x1019c8f8u) + eax) * 4u);
    switch (t4 - RD)
    {
    case 0x1019c8e0u: ecx = rd8(COW_IMG(0x1019c8f8u) + eax); goto L_1019c8e0;
    case 0x1019c8e5u: goto L_1019c8e5;
    default: rt_fatal(g, COW_IMG(0x1019c8d9u), "switch");
    }
    return;
L_1019c8e0: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
L_1019c8e5: ;
    wr8(self + 0x28u, 0u);
L_1019c8e9: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019c820(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019c820(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
