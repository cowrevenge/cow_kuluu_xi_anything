/* f_0x10325709 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   writes decimal digits into a buffer, updates the buffer pointer and remaining count, then reverses the written bytes.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10325709(Guest* g, uint32_t arg0_addr, uint32_t pptr, uint32_t pcount)
{
    (void)g;

    uint32_t ecx = rd32(pptr);

    for (;;)
    {
        /* cmp dword ptr [esi], 1 ; jbe exit  (unsigned) */
        if (rd32(pcount) <= 1u)
            break;

        int32_t value = (int32_t)rd32(arg0_addr);

        /* idiv ebx with ebx = 10, dividend sign-extended from eax */
        int32_t quotient  = value / 10;
        int32_t remainder = value % 10;

        /* add dl, 0x30 ; mov byte ptr [ecx], dl */
        wr8(ecx, (uint8_t)((uint8_t)remainder + 0x30u));

        /* inc ecx */
        ecx = ecx + 1u;

        /* second idiv uses the same reloaded value; quotient is stored back to [ebp+8] */
        quotient = value / 10;

        /* dec dword ptr [esi] */
        wr32(pcount, rd32(pcount) - 1u);

        /* mov dword ptr [ebp + 8], eax */
        wr32(arg0_addr, (uint32_t)quotient);

        /* test eax, eax ; jg loop  (signed) */
        if (quotient <= 0)
            break;
    }

    /* mov eax, dword ptr [edi] */
    uint32_t eax = rd32(pptr);

    /* mov dword ptr [edi], ecx */
    wr32(pptr, ecx);

    /* dec ecx */
    ecx = ecx - 1u;

    /* reverse the bytes that were written (including the original no-digit edge case) */
    for (;;)
    {
        uint8_t bl = rd8(eax);
        uint8_t dl = rd8(ecx);

        wr8(ecx, bl);
        ecx = ecx - 1u;

        wr8(eax, dl);
        eax = eax + 1u;

        /* cmp eax, ecx ; jb loop  (unsigned) */
        if (!(eax < ecx))
            break;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10325709(Guest* g)
{
    const uint32_t sp0 = g->esp;

    const uint32_t arg0_addr = sp0 + 4u;
    const uint32_t pptr      = rd32(sp0 + 8u);
    const uint32_t pcount    = rd32(sp0 + 12u);

    cow_fn_10325709(g, arg0_addr, pptr, pcount);

    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
