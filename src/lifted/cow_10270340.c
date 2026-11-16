/* f_0x10270340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10270340(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u) + 0x44u) <= 0)
        {
            eax = rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u);
            edx = rd32(COW_IMG(0x1099aed0u));
            ebx = 0u;
            goto L_1027039b;
        }
        eax = rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u);
        ecx = rd32(rd32(arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u) + 0x44u);
        edx = rd32(COW_IMG(0x1099aed0u));
        ebx = 0u;
        esi = 0u;
        edi = arg1 * 0xacu + rd32(COW_IMG(0x1099aed0u));
L_1027037a: ;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, eax, esi);
        t2 = g->edx;
        if (rd32(t1) != 0xb0001u)
        {
            ecx = rd32(t1);
            edx = t2;
        }
        else
        {
            ecx = rd32(t1);
            edx = t2;
            ebx = ebx + 1u;
        }
        if ((int32_t)(esi + 1u) < (int32_t)rd32(rd32(edi + 0xa8u) + 0x44u))
        {
            eax = rd32(edi + 0xa8u);
            esi = esi + 1u;
            goto L_1027037a;
        }
        eax = rd32(edi + 0xa8u);
L_1027039b: ;
        wr32(arg2, ebx);
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10270340(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10270340(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
