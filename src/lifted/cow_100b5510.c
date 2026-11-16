/* f_0x100b5510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100b5510(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, sp0 - 0xcu);
    wr32(sp0 - 0x20u, sp0 - 4u);
    wr32(sp0 - 0x24u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_thiscall(g, COW_IMG(0x100afac0u), self, 1, 1u);
    t2 = g->edx;
    wr32(sp0 - 0x24u, t1);
    g->esp = sp0 - 0x18u;
    t3 = cow_fastcall(g, COW_IMG(0x100afb00u), self, t2, 3, t1, sp0 - 4u, sp0 - 0xcu);
    if ((uint8_t)t3 != 1u)
    {
        eax = t3;
        goto L_100b559f;
    }
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u) == 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u);
        goto L_100b559f;
    }
    eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u);
    ebp = COW_IMG(0x10480af0u) + (uint16_t)rd32(sp0 - 0xcu) * 4u;
    t4 = rd32(eax + 0x74u);
    wr32(sp0 - 0xcu, t4);
    if (rd32(eax + 0x78u) != rd32(sp0 - 4u)) goto L_100b559f;
    t5 = rd32(eax + 0x120u);
    if (!(t5 >> 9u & 1u)) goto L_100b559f;
    ecx = t5;
    edx = t5 >> 9u;
    if (!(ecx >> 7u & 1u)) goto L_100b559f;
    t6 = rd32(eax + 0xa0u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x100d12d0u), eax, t6, g->edx, 1, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        eax = t7;
        goto L_100b55bc;
    }
    eax = t7;
    edx = t8;
    edi = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x10087d40u), rd32(ebp), 0);
    t10 = g->edx;
    wr32(sp0 - 0x1cu, 2u);
    t11 = cow_thiscall(g, COW_IMG(0x100d44b0u), edi, 1, 2u);
    eax = t11;
L_100b559f: ;
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 5u));
    wr8(self + 0x25au, (uint8_t)arg1);
    return (eax & 0xffffff00u) | 1u;
L_100b55bc: ;
    wr8(self + 0x25au, 1u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b5510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100b5510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
