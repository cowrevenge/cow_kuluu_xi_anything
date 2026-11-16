/* f_0x10325c9d - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10325c9d(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(sp0 + 0x14u) == 0u)
    {
        esi = rd32(sp0 + 0xcu);
        ebx = arg1;
        edi = arg2;
    }
    else
    {
        esi = rd32(sp0 + 0xcu);
        wr8(esi, 0x2du);
        ebx = -arg1;
        esi = esi + 1u;
        edi = -(arg2 + (arg1 != 0u));
    }
    wr32(sp0 + 0xcu, esi);
    ecx = self;
    edx = in_edx;
L_10325cc8: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_stdcall(g, COW_IMG(0x103168f0u), 4, ebx, edi, arg4, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 0x14u, t1);
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_stdcall(g, COW_IMG(0x10316970u), 4, ebx, edi, arg4, 0u);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(sp0 + 0x14u) <= 9u)
    {
        eax = rd32(sp0 + 0x14u);
        ecx = t5;
        edx = t6;
        ebx = t4;
        edi = t6;
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x30u);
    }
    else
    {
        eax = rd32(sp0 + 0x14u);
        ecx = t5;
        edx = t6;
        ebx = t4;
        edi = t6;
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x57u);
    }
    wr8(esi, (uint8_t)eax);
    if (edi != 0u)
    {
        esi = esi + 1u;
        goto L_10325cc8;
    }
    esi = esi + 1u;
    if (0u) goto L_10325d04;
    if (ebx != 0u) goto L_10325cc8;
L_10325d04: ;
    wr8(esi, 0u);
    esi = esi - 1u;
L_10325d08: ;
    t7 = rd32(sp0 + 0xcu);
    t8 = rd8(esi);
    t9 = rd8(rd32(sp0 + 0xcu));
    wr8(esi, (uint8_t)t9);
    wr8(t7, (uint8_t)t8);
    wr32(sp0 + 0xcu, t7 + 1u);
    if (t7 + 1u < esi - 1u)
    {
        ecx = (ecx & 0xffffff00u) | t8;
        edx = (edx & 0xffffff00u) | t9;
        esi = esi - 1u;
        goto L_10325d08;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325c9d(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10325c9d(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
