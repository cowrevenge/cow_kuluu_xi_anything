/* f_0x100a3fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100a3fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t sf;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(rd32(sp0 + 4u)) != 0x22u)
    {
        eax = rd32(sp0 + 4u);
        edx = 0u;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        wr8(eax, 0x20u);
        eax = eax + 1u;
        edx = 1u;
    }
    ecx = self;
    ebx = in_ebx;
L_100a3ff5: ;
    if (edx != 0u)
    {
        zf = edx == 0u;
        sf = (int32_t)edx < 0;
        goto L_100a4005;
    }
    if (rd8(eax) == 9u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        goto L_100a402a;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    zf = (uint8_t)((uint8_t)ecx - 0x20u) == 0u;
L_100a400a: ;
    if (zf) goto L_100a402a;
L_100a400c: ;
    if (rd8(eax) == 0u) goto L_100a4038;
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    if ((ecx & 0x80u) == 0u)
    {
        ecx = (ecx & 0xffffff00u) | (ecx & 0x80u);
        goto L_100a401e;
    }
    ecx = (ecx & 0xffffff00u) | (ecx & 0x80u);
    if (rd8(eax + 1u) == 0u) goto L_100a4038;
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
L_100a401e: ;
    if ((uint8_t)ecx == 0u)
    {
        eax = eax + 1u;
    }
    else
    {
        eax = eax + 2u;
    }
    goto L_100a3ff5;
L_100a4005: ;
    if (zf || sf) goto L_100a400c;
    zf = (uint8_t)(rd8(eax) - 0x22u) == 0u;
    goto L_100a400a;
L_100a402a: ;
    wr8(eax, 0u);
    wr32(sp0 + 4u, eax + 1u);
    if (rd8(rd32(sp0 + 4u)) == 0u) goto L_100a405c;
    eax = rd32(sp0 + 4u);
    ecx = (ecx & 0xffffff00u) | rd8(rd32(sp0 + 4u));
L_100a404a: ;
    if ((uint8_t)ecx == 9u) goto L_100a4054;
    if ((uint8_t)ecx != 0x20u) goto L_100a405c;
L_100a4054: ;
    if (rd8(eax + 1u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        eax = eax + 1u;
        goto L_100a404a;
    }
L_100a405c: ;
    return;
L_100a4038: ;
    wr8(eax, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a3fe0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a3fe0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
