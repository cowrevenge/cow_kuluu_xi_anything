/* f_0x102f6728 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f6728(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)arg2 < 0)
    {
        esi = rd32(arg1 + 4u);
        goto L_102f6740;
    }
    esi = rd32(arg1 + 4u);
    if ((int32_t)arg2 < 2)
    {
        ecx = self;
        edx = in_edx;
        goto L_102f6754;
    }
L_102f6740: ;
    wr32(rd32(arg1) + 0x14u, 0xcu);
    wr32(rd32(arg1) + 0x18u, arg2);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall_cdecl(g, rd32(rd32(arg1)), rd32(arg1), 1, arg1);
    t1 = g->edx;
    ecx = arg1;
    edx = t1;
L_102f6754: ;
    if (arg2 == 1u)
    {
        edi = rd32(esi + 0x40u);
L_102f6777: ;
        if (edi != 0u) goto L_102f675e;
        wr32(esi + 0x40u, rd32(esi + 0x40u) & edi);
        edi = rd32(esi + 0x44u);
L_102f679c: ;
        if (edi != 0u) goto L_102f6783;
        wr32(esi + 0x44u, rd32(esi + 0x44u) & edi);
    }
    t4 = rd32(arg2 * 4u + esi + 0x38u);
    wr32(arg2 * 4u + esi + 0x38u, 0u);
    if (t4 == 0u) goto L_102f67d5;
    eax = t4;
L_102f67b0: ;
    t5 = rd32(eax + 4u) + rd32(eax + 8u) + 0x10u;
    t6 = rd32(eax);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x103028ecu), g->eax, rd32(eax + 8u), rd32(eax + 4u), 1, 2, arg1, eax);
    wr32(esi + 0x48u, rd32(esi + 0x48u) - t5);
    if (t6 != 0u)
    {
        eax = t6;
        goto L_102f67b0;
    }
L_102f67d5: ;
    t7 = rd32(arg2 * 4u + esi + 0x30u);
    wr32(arg2 * 4u + esi + 0x30u, 0u);
    if (t7 == 0u) goto L_102f6804;
    eax = t7;
L_102f67e2: ;
    t8 = rd32(eax + 4u) + rd32(eax + 8u) + 0x10u;
    t9 = rd32(eax);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x103028d6u), g->eax, rd32(eax + 8u), rd32(eax + 4u), 1, 2, arg1, eax);
    wr32(esi + 0x48u, rd32(esi + 0x48u) - t8);
    if (t9 != 0u)
    {
        eax = t9;
        goto L_102f67e2;
    }
L_102f6804: ;
    return;
L_102f675e: ;
    if (rd8(edi + 0x22u) != 0u)
    {
        wr8(edi + 0x22u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(edi + 0x30u), ecx, 2, arg1, edi + 0x28u);
        t3 = g->edx;
        ecx = edi + 0x28u;
        edx = t3;
    }
    edi = rd32(edi + 0x24u);
    goto L_102f6777;
L_102f6783: ;
    if (rd8(edi + 0x22u) != 0u)
    {
        wr8(edi + 0x22u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall_cdecl(g, rd32(edi + 0x30u), ecx, 2, arg1, edi + 0x28u);
        t2 = g->edx;
        ecx = edi + 0x28u;
        edx = t2;
    }
    edi = rd32(edi + 0x24u);
    goto L_102f679c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6728(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f6728(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
