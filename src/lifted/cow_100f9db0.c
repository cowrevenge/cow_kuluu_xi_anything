/* f_0x100f9db0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f9db0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x104dfd94u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd94u));
        goto L_100f9dbc;
    }
    eax = rd32(COW_IMG(0x104dfd94u));
    return eax & 0xffffff00u;
L_100f9dbc: ;
    if (rd32(eax + 0x40e40u) == 0u)
    {
        ecx = rd32(eax + 0x40e40u);
        edx = in_edx;
        goto L_100f9de3;
    }
    ecx = rd32(eax + 0x40e40u);
    edx = in_edx;
    esi = 0u;
L_100f9dc9: ;
    t1 = rd32(eax + esi * 4u);
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x100f9df0u), g->eax, ecx, edx, 1, 1, t1);
    t2 = g->ecx;
    t3 = g->edx;
    if (esi + 1u < rd32(rd32(COW_IMG(0x104dfd94u)) + 0x40e40u))
    {
        eax = rd32(COW_IMG(0x104dfd94u));
        ecx = t2;
        edx = t3;
        esi = esi + 1u;
        goto L_100f9dc9;
    }
    eax = rd32(COW_IMG(0x104dfd94u));
    ecx = t2;
    edx = t3;
L_100f9de3: ;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x100f9da0u), 0);
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100f9db0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100f9db0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
