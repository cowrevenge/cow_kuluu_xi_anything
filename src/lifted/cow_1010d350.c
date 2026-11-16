/* f_0x1010d350 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1010d350(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    edi = rd32(arg1 + 0x18u);
L_1010d35f: ;
    if (rd32(edi + 4u) == 0u) goto L_1010d3ca;
    if (rd32(edi + 8u) == 0u) goto L_1010d3ca;
    esi = rd32(self + 0x14u);
L_1010d36c: ;
    if (rd32(esi + 4u) == 0u) goto L_1010d3bf;
    if (rd32(esi + 8u) == 0u) goto L_1010d3bf;
    eax = rd32(esi + 8u);
    if (rd32(esi) == rd32(edi))
    {
        edx = rd32(edi);
        goto L_1010d384;
    }
    esi = eax;
    goto L_1010d36c;
L_1010d384: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        t1 = rd32(esi + 8u);
        wr32(eax + 8u, t1);
        edx = t1;
    }
    if (rd32(esi + 8u) == 0u)
    {
        eax = rd32(esi + 8u);
    }
    else
    {
        eax = rd32(esi + 8u);
        t2 = rd32(esi + 4u);
        wr32(eax + 4u, t2);
    }
    wr32(esi + 8u, 0u);
    wr32(esi + 4u, 0u);
    if (rd8(self + 8u) == 0u)
    {
        wr32(esi, 0u);
    }
    g->ebx = 0u;
    g->ebp = self;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x1010e730u), eax, esi, edx, 1, 0);
    t4 = g->ecx;
    t5 = g->edx;
    cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    wr16(self + 0xau, (uint16_t)(rd16(self + 0xau) - 1u));
L_1010d3bf: ;
    if (rd32(edi + 8u) != 0u)
    {
        eax = rd32(edi + 8u);
        edi = eax;
    }
    goto L_1010d35f;
L_1010d3ca: ;
    g->ebx = in_ebx;
    g->ebp = in_ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d350(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010d350(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
