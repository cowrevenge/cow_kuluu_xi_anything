/* f_0x10317730 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   installs a simple SEH-style frame, saves the old exception list and ebp, and returns the caller's return address in eax.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10317730(Guest* g, uint32_t sp0)
{
    const uint32_t eax_in = g->eax;
    const uint32_t ebp_in = g->ebp;
    const uint32_t ret_addr = rd32(sp0);
    const uint32_t fs0_old = rd32(g->fs_base);

    /*
     * Original stack evolution (esp0 = sp0):
     *   push -1                 esp = esp0 - 4
     *   push eax                esp = esp0 - 8
     *   push fs:[0]             esp = esp0 - 12
     *   mov eax, [esp + 0xc]    eax = [esp0] = return address
     *   mov fs:[0], esp
     *   mov [esp + 0xc], ebp    [esp0] = old ebp
     *   lea ebp, [esp + 0xc]    ebp = esp0
     *   push eax                esp = esp0 - 16
     *   ret                     esp = esp0 - 12
     */

    wr32(sp0 - 4u, 0xFFFFFFFFu);
    wr32(sp0 - 8u, eax_in);
    wr32(sp0 - 12u, fs0_old);

    wr32(g->fs_base, sp0 - 12u);
    wr32(sp0, ebp_in);

    wr32(sp0 - 16u, ret_addr);

    g->ebp = sp0;
    g->edx = g->edx;          /* edx is untouched by the original */
    g->esp = sp0 - 16u;       /* rt_return will pop this and leave esp = sp0 - 12 */

    return ret_addr;          /* final eax */
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10317730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10317730(g, sp0);
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
