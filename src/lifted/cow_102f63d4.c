/* f_0x102f63d4 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f63d4(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(in_esi + 8u);
    if ((int32_t)rd32(in_esi + 0x10u) <= 0) goto L_102f6458;
    eax = rd32(in_esi + 0x10u);
    ebx = rd32(in_esi + 0x18u) * rd32(in_esi + 8u);
    edi = 0u;
    loc_c = t1;
L_102f63f0: ;
    if ((int32_t)rd32(in_esi + 0x14u) >= (int32_t)(eax - edi))
    {
        eax = eax - edi;
    }
    else
    {
        ecx = rd32(in_esi + 0x14u);
        eax = ecx;
    }
    if ((int32_t)eax < (int32_t)(rd32(in_esi + 0x1cu) - (edi + rd32(in_esi + 0x18u))))
    {
        ecx = edi + rd32(in_esi + 0x18u);
    }
    else
    {
        ecx = edi + rd32(in_esi + 0x18u);
        edx = rd32(in_esi + 0x1cu) - (edi + rd32(in_esi + 0x18u));
        eax = edx;
    }
    if ((int32_t)eax < (int32_t)(rd32(in_esi + 4u) - ecx))
    {
        edx = rd32(in_esi + 4u) - ecx;
    }
    else
    {
        edx = rd32(in_esi + 4u) - ecx;
        eax = edx;
    }
    if ((int32_t)eax <= 0) goto L_102f6458;
    if ((uint8_t)arg2 == 0u)
    {
        loc_8 = eax * loc_c;
        t3 = rd32(edi * 4u + rd32(in_esi));
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, rd32(in_esi + 0x28u), rd32(in_esi), 3, arg1, in_esi + 0x28u, t3);
    }
    else
    {
        loc_8 = eax * loc_c;
        t2 = rd32(edi * 4u + rd32(in_esi));
        g->esp = sp0 - 0x1cu;
        cow_thiscall_cdecl(g, rd32(in_esi + 0x2cu), ecx, 3, arg1, in_esi + 0x28u, t2);
    }
    if ((int32_t)(edi + rd32(in_esi + 0x14u)) < (int32_t)rd32(in_esi + 0x10u))
    {
        eax = rd32(in_esi + 0x10u);
        ebx = ebx + loc_8;
        edi = edi + rd32(in_esi + 0x14u);
        goto L_102f63f0;
    }
L_102f6458: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f63d4(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f63d4(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
