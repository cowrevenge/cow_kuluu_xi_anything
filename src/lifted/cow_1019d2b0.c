/* f_0x1019d2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1019d2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(COW_IMG(0x1037a1a0u)) != 0xffu)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x1037a1a0u));
        ecx = self;
        edx = in_edx;
        esi = self + 0x29u;
        edi = COW_IMG(0x1037a1a0u);
L_1019d2c3: ;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_cdecl(g, COW_IMG(0x10123640u), 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr8(esi, (uint8_t)t1);
        if (rd8(edi + 4u) != 0xffu)
        {
            eax = (t1 & 0xffffff00u) | rd8(edi + 4u);
            ecx = t2;
            edx = t3;
            esi = esi + 1u;
            edi = edi + 4u;
            goto L_1019d2c3;
        }
        eax = (t1 & 0xffffff00u) | rd8(edi + 4u);
        ecx = t2;
        edx = t3;
        if (rd8(COW_IMG(0x1037a1a0u)) != 0xffu)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x1037a1a0u));
            ebx = COW_IMG(0x1037a1a0u);
            edi = COW_IMG(0x1037a1a0u);
L_1019d2e9: ;
            esi = 0u;
L_1019d2eb: ;
            if (rd8(edi + esi) == 0xffu)
            {
                eax = (eax & 0xffffff00u) | rd8(edi + esi);
                goto L_1019d303;
            }
            eax = (eax & 0xffffff00u) | rd8(edi + esi);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall_cdecl(g, COW_IMG(0x10123650u), ecx, 2, eax, 0u);
            t5 = g->ecx;
            t6 = g->edx;
            if ((int32_t)(esi + 1u) < 4)
            {
                eax = t4;
                ecx = t5;
                edx = t6;
                esi = esi + 1u;
                goto L_1019d2eb;
            }
            eax = t4;
            ecx = t5;
            edx = t6;
L_1019d303: ;
            if (rd8(ebx + 4u) != 0xffu)
            {
                eax = (eax & 0xffffff00u) | rd8(ebx + 4u);
                edi = ebx + 4u;
                ebx = ebx + 4u;
                goto L_1019d2e9;
            }
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1019d2b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
