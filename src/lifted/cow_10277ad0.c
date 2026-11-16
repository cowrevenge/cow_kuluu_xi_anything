/* f_0x10277ad0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10277ad0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10277b90u), 1, rd32(arg1));
    t1 = g->ecx;
    t2 = g->edx;
    if ((rd32(rd32(arg1) + 0xa8u) >> 8u & 2u) == 0u)
    {
        ecx = t1;
        edx = t2;
        esi = rd32(arg1);
        goto L_10277b6c;
    }
    eax = rd32(rd32(arg1) + 0xa8u);
    ecx = t1;
    edx = t2;
    esi = rd32(arg1);
    if (rd8(esi - 0x10u) != 0x44u) goto L_10277b4b;
    if (rd8(esi - 0xfu) != 0x4du) goto L_10277b4b;
    if (rd8(esi - 0xeu) != 0x42u) goto L_10277b4b;
    if (rd32(esi - 4u) != 0u)
    {
        eax = rd32(esi - 4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xa6u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(esi - 4u, 0u);
        ecx = t3;
        edx = t4;
    }
    if (rd32(esi - 8u) == 0u) goto L_10277b7f;
    eax = rd32(esi - 8u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x103b37ecu), 0xaeu);
    wr32(esi - 8u, 0u);
    wr32(arg1, 0u);
    return;
L_10277b4b: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3874u), in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x102755e0u), g->eax, g->ecx, t7, 1, 2, esi - 0x20u, 0x30u);
    wr32(arg1, 0u);
    return;
L_10277b6c: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10276110u), 3, esi, COW_IMG(0x103b37ecu), 0xb5u);
L_10277b7f: ;
    wr32(arg1, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10277ad0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10277ad0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
