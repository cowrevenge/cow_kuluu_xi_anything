/* f_0x10062fc0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Adjusts self pointer by -0x34, then performs cleanup/destruction based on flag bits.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10062fc0(Guest* g, uint32_t self, uint32_t flag)
{
    const uint32_t adjusted_self = self - 0x34u;
    uint32_t eax_result = 0;
    uint8_t bl = (uint8_t)(flag & 0xFF);

    if (bl & 2)
    {
        uint32_t ebp_val = adjusted_self - 4u;
        uint32_t count = rd32(ebp_val);

        /* ecx = count * 3 */
        uint32_t ecx_temp = count + (count << 1);
        /* eax = count - 1 */
        int32_t eax_dec = (int32_t)count - 1;
        /* ecx = count * 15 */
        ecx_temp = ecx_temp + (ecx_temp << 2);
        /* esi = adjusted_self + count*120 */
        uint32_t esi_val = adjusted_self + (ecx_temp << 3);

        if (eax_dec >= 0)
        {
            uint32_t edi = (uint32_t)(eax_dec + 1);
            do
            {
                esi_val -= 0x78u;
                cow_fastcall(g, COW_IMG(0x10062140u), esi_val, g->edx, 0);
                edi--;
            } while (edi != 0);
        }

        if (bl & 1)
        {
            cow_cdecl(g, COW_IMG(0x1002c8e0u), 1, ebp_val);
        }

        eax_result = ebp_val;
    }
    else
    {
        uint32_t esi_val = adjusted_self;
        cow_fastcall(g, COW_IMG(0x10062140u), esi_val, g->edx, 0);

        if (bl & 1)
        {
            cow_cdecl(g, COW_IMG(0x10028710u), 1, esi_val);
        }

        eax_result = esi_val;
    }

    return eax_result;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10062fc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10062fc0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
