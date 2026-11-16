/* f_0x1028d840 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1028d840(Guest* g)
{
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1 + 0x14u) == 0u) goto L_1028d887;
    if (rd32(arg1 + 0x28u) == 0u) goto L_1028d868;
    ecx = rd32(arg1 + 0x28u);
    t1 = rd32(arg1 + 0x2cu);
    t2 = rd32(arg1 + 0x1cu);
    t3 = rd32(arg1 + 0x20u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, ecx, ecx, 3, t3, t2, t1);
    return;
L_1028d868: ;
    if (rd32(arg1 + 0x20u) != 0u)
    {
        edi = rd32(arg1 + 0x20u);
        if (rd32(arg1 + 0x1cu) != 0u)
        {
            esi = rd32(arg1 + 0x1cu);
            t4 = rd32(arg1 + 0x24u);
            ecx = t4 >> 2u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            ecx = t4 & 3u;
            while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        }
    }
L_1028d887: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d840(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028d840(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
