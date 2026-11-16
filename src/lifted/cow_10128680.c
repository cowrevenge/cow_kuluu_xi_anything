/* f_0x10128680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10128680(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(arg1) == 0u)
    {
        edx = in_edx;
        edi = 0u;
        goto L_101286e3;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg1);
    ecx = self;
    edx = in_edx;
    esi = arg1;
    edi = 0u;
L_1012868e: ;
    if ((uint8_t)eax != 0x7fu) goto L_101286bf;
    if ((uint32_t)(int8_t)rd8(esi + 1u) + 5u > 0x3du)
    {
        eax = (uint32_t)(int8_t)rd8(esi + 1u) + 5u;
        goto L_101286bc;
    }
    eax = (uint32_t)(int8_t)rd8(esi + 1u) + 5u;
    t1 = rd32(COW_IMG(0x101286e8u) + rd8(COW_IMG(0x101286f8u) + eax) * 4u);
    ecx = rd8(COW_IMG(0x101286f8u) + eax);
    switch (t1 - RD)
    {
    case 0x101286adu: goto L_101286ad;
    case 0x101286b2u: goto L_101286b2;
    case 0x101286b7u: goto L_101286b7;
    case 0x101286bcu: goto L_101286bc;
    default: rt_fatal(g, COW_IMG(0x101286a6u), "switch");
    }
    return 0;
L_101286ad: ;
    esi = esi + 2u;
L_101286dc: ;
    if (rd8(esi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        edi = edi + 1u;
        goto L_1012868e;
    }
    edi = edi + 1u;
L_101286e3: ;
    g->edx = edx;
    return edi;
L_101286b2: ;
    esi = esi + 3u;
    goto L_101286dc;
L_101286b7: ;
    esi = esi + 4u;
    goto L_101286dc;
L_101286bc: ;
    esi = esi + 1u;
    goto L_101286dc;
L_101286bf: ;
    if ((uint8_t)eax != 0x1eu)
    {
        if ((uint8_t)eax != 0x1fu)
        {
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t2 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, esi);
            t3 = g->ecx;
            t4 = g->edx;
            eax = t2;
            ecx = t3;
            edx = t4;
            esi = esi + t2;
        }
        else
        {
            esi = esi + 2u;
        }
    }
    else
    {
        esi = esi + 2u;
    }
    goto L_101286dc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10128680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
