/* f_0x100766f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u64 stack_args=1 */
uint32_t cow_fn_100766f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        ebx = 0u;
        ebp = 0u;
        goto L_10076721;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    ebx = 0u;
    ebp = 0u;
    esi = arg1;
    edi = 0u;
L_10076704: ;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x10312a60u), (uint32_t)(int8_t)eax, edi * 8u, (uint32_t)((int32_t)(uint32_t)(int8_t)eax >> 0x1fu), 1, 0);
    t2 = g->edx;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(esi + 1u);
        ebx = ebx | t1;
        ebp = ebp | t2;
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_10076704;
    }
    ebx = ebx | t1;
    ebp = ebp | t2;
L_10076721: ;
    esi = 0u;
L_10076723: ;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x10312a60u), 0x20u, esi * 8u, 0u, 1, 0);
    t4 = g->edx;
    if ((int32_t)(esi + 1u) < 8)
    {
        ebx = ebx | t3;
        ebp = ebp | t4;
        esi = esi + 1u;
        goto L_10076723;
    }
    ebx = ebx | t3;
    ebp = ebp | t4;
    g->edx = ebp;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100766f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100766f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
