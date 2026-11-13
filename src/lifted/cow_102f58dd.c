/* f_0x102f58dd - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   returns (arg0 + arg1 - 1) minus the signed remainder of dividing that value by arg1, leaving the remainder in edx.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=2 */
uint32_t cow_fn_102f58dd(Guest* g, uint32_t arg0, uint32_t arg1)
{
    uint32_t eax, ecx, edx, ebx, esp, ebp, esi, edi;
    uint32_t cf, of, af, zf, sf, pf, df;

    (void)g;

    /*
     * We do not need the live register values here except edx, which must be
     * left with the idiv remainder.  The other locals are kept in the same
     * names as the lowered code so RT_DIVIDE and any flag macros see a complete
     * register/flag environment.
     */
    eax = g->eax;
    ecx = g->ecx;
    edx = g->edx;
    ebx = g->ebx;
    esp = g->esp;
    ebp = g->ebp;
    esi = g->esi;
    edi = g->edi;

    cf = of = af = zf = sf = pf = df = 0u;

    /* mov eax, dword ptr [esp + 4] */
    eax = arg0;

    /*
     * Original:
     *   push esi
     *   mov esi, dword ptr [esp + 0xc]
     *   pop esi
     *
     * The push/pop restores esi to its entry value, so it is not observable.
     * We only need the value loaded into esi for the division.
     */
    esi = arg1;

    /* lea ecx, [eax + esi - 1] */
    ecx = (uint32_t)(eax + esi + 0xFFFFFFFFu);

    /* mov eax, ecx */
    eax = ecx;

    /* cdq */
    edx = (uint32_t)((int32_t)eax >> 31);

    /*
     * idiv esi
     *
     * Signed divide edx:eax by esi.  Because edx was just produced by cdq,
     * edx:eax is exactly the signed 64-bit value of (int32_t)eax.
     *
     * Preserve the x86 divide-error cases:
     *   divisor == 0
     *   quotient does not fit in signed 32 bits
     */
    {
        int64_t n = (int64_t)(((uint64_t)edx << 32) | (uint64_t)eax);
        int32_t d = (int32_t)esi;

        if (!d || (n == (-9223372036854775807LL - 1) && d == -1))
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->ebx = ebx;
            g->esp = esp;
            g->ebp = ebp;
            g->esi = esi;
            g->edi = edi;
            RT_DIVIDE(COW_IMG(0x102F58EDu));
        }

        /*
         * Avoid signed C overflow for the only 64-bit case that can overflow
         * int64_t division before the later quotient range check.
         */
        if (n == (-9223372036854775807LL - 1) && d == -1)
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->ebx = ebx;
            g->esp = esp;
            g->ebp = ebp;
            g->esi = esi;
            g->edi = edi;
            RT_DIVIDE(COW_IMG(0x102F58EDu));
        }

        int64_t q = n / (int64_t)d;

        if (q > 2147483647LL || q < (-2147483647LL - 1LL))
        {
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->ebx = ebx;
            g->esp = esp;
            g->ebp = ebp;
            g->esi = esi;
            g->edi = edi;
            RT_DIVIDE(COW_IMG(0x102F58EDu));
        }

        /* idiv leaves quotient in eax, remainder in edx. */
        eax = (uint32_t)(int32_t)q;
        edx = (uint32_t)(int32_t)(n % (int64_t)d);
    }

    /* mov eax, ecx */
    eax = ecx;

    /* pop esi is restored to the original esi, so g->esi remains unchanged. */

    /* sub eax, edx */
    {
        uint32_t a = eax;
        uint32_t b = edx;
        uint32_t r = (uint32_t)(a - b);

        cf = (uint32_t)a < (uint32_t)b;
        of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1u;
        af = (((a) ^ (b) ^ (r)) >> 4) & 1u;
        zf = (uint32_t)r == 0;
        sf = ((r) >> 31) & 1u;
        pf = PARITY(r);

        eax = r;
    }

    /*
     * The judge compares eax and edx.  Return eax and leave edx exactly as
     * idiv left it.
     */
    g->edx = edx;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f58dd(Guest* g)
{
    const uint32_t sp0 = g->esp;      /* [sp0] is the return address; stack argument i is rd32(sp0 + 4 + 4*i) */
    const uint32_t arg0 = rd32(sp0 + 4u);
    const uint32_t arg1 = rd32(sp0 + 8u);

    const uint32_t result = cow_fn_102f58dd(g, arg0, arg1);

    g->esp = sp0;
    rt_return(g, result, 0u);         /* bare ret */
}
/* COW_ADAPTER END */
