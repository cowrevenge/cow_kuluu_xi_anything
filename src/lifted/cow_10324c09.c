/* f_0x10324c09 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10324c09(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109f9430u)) == 0u)
    {
        edx = in_edx;
        goto L_10324c80;
    }
    esi = rd32(COW_IMG(0x109b26e4u));
    if (esi != 0u)
    {
        eax = in_eax;
        ecx = self;
        edx = in_edx;
        goto L_10324c3a;
    }
    if (rd32(COW_IMG(0x109b26ecu)) == esi)
    {
        edx = in_edx;
        goto L_10324c80;
    }
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x10326637u), self, in_edx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        edx = t3;
        goto L_10324c80;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd32(COW_IMG(0x109b26e4u)) == 0u) goto L_10324c80;
    esi = rd32(COW_IMG(0x109b26e4u));
L_10324c3a: ;
    if (arg1 == 0u) goto L_10324c80;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, arg1);
    t5 = g->edx;
    ecx = arg1;
    edx = t5;
    edi = t4;
L_10324c4b: ;
    if (rd32(esi) == 0u) goto L_10324c80;
    eax = rd32(esi);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, eax);
    t7 = g->edx;
    if (t6 <= edi)
    {
        ecx = eax;
        edx = t7;
        goto L_10324c73;
    }
    ecx = eax;
    edx = t7;
    if (rd8(edi + rd32(esi)) != 0x3du) goto L_10324c73;
    eax = rd32(esi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x103265f8u), 5, eax, arg1, edi, in_edi, in_esi);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        edx = t10;
        goto L_10324c78;
    }
    ecx = t9;
    edx = t10;
L_10324c73: ;
    esi = esi + 4u;
    goto L_10324c4b;
L_10324c78: ;
    eax = edi + rd32(esi) + 1u;
L_10324c82: ;
    g->edx = edx;
    return eax;
L_10324c80: ;
    eax = 0u;
    goto L_10324c82;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10324c09(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10324c09(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
