/* f_0x10273c40 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   Preallocates or reports the preallocation state of a chasm object, initializing its two arrays when needed.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=3 */
uint32_t cow_fn_10273c40(Guest* g, uint32_t sp0, uint32_t self, uint32_t count1, uint32_t count2)
{
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    uint32_t eax;
    uint32_t edx = g->edx;

    g->esi = self;
    g->esp = sp0 - 12u;

    eax = rd32(self);

    if ((eax & 1u) == 0u)
    {
        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        g->esp = sp0;
        return eax;
    }

    if ((eax & 2u) != 0u)
    {
        g->eax = count2;
        g->ecx = count1;
        g->edx = edx;
        g->ebx = saved_ebx;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        g->esp = sp0 - 12u;

        cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
                  COW_IMG(0x103b2678u), count1, count2);

        edx = rd32(self + 0x1cu);
        eax = rd32(self + 0xcu);

        g->eax = eax;
        g->edx = edx;
        g->esi = self;
        g->esp = sp0 - 24u;

        cow_cdecl(g, COW_IMG(0x102858b0u), 3u,
                  COW_IMG(0x103b2648u), eax, edx);

        eax = g->eax;
        edx = g->edx;

        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->edi = saved_edi;
        g->ebp = saved_ebp;
        g->esp = sp0;
        return eax;
    }

    {
        uint32_t edi = count1;
        uint32_t ebx = 0u;
        uint32_t ebp = g->ebp;

        g->edi = edi;
        g->ebx = ebx;
        g->esp = sp0 - 12u;

        if ((int32_t)edi > (int32_t)ebx)
        {
            uint32_t ecx = (edi + edi * 2u) << 2;

            g->ecx = ecx;
            g->esi = self;
            g->esp = sp0 - 16u;

            eax = cow_cdecl(g, COW_IMG(0x10275da0u), 4u,
                            1u, ecx, COW_IMG(0x103b24f4u), 0xf2u);

            ebp = 0u;
            g->ebp = ebp;
            g->eax = eax;
            g->esi = self;

            wr32(self + 0x10u, eax);
            wr32(self + 0xcu, edi);
            wr32(self + 8u, ebx);

            if ((int32_t)edi > (int32_t)ebx)
            {
                edi = 0u;
                g->edi = edi;
                g->ebp = ebp;
                g->ebx = ebx;
                g->esi = self;

                do
                {
                    edx = rd32(self + 0x10u) + edi;

                    g->edx = edx;
                    g->eax = eax;
                    g->esp = sp0 - 16u;

                    cow_cdecl(g, COW_IMG(0x10273db0u), 1u, edx);

                    eax = rd32(self + 0xcu);
                    ++ebp;
                    edi += 0xcu;

                    g->eax = eax;
                    g->ebp = ebp;
                    g->edi = edi;
                    g->ebx = ebx;
                    g->esi = self;
                } while ((int32_t)ebp < (int32_t)eax);
            }
        }

        edi = count2;
        g->edi = edi;
        g->ebx = ebx;
        g->ebp = ebp;
        g->eax = eax;
        g->esi = self;
        g->esp = sp0 - 12u;

        if ((int32_t)edi > (int32_t)ebx)
        {
            eax = edi + edi * 2u;
            eax = eax + eax * 8u;
            eax <<= 3;

            g->eax = eax;
            g->esi = self;
            g->esp = sp0 - 12u;

            eax = cow_cdecl(g, COW_IMG(0x10275da0u), 4u,
                            1u, eax, COW_IMG(0x103b24f4u), 0xfdu);

            g->eax = eax;
            g->esi = self;

            wr32(self + 0x20u, eax);
            wr32(self + 0x1cu, edi);
            wr32(self + 0x18u, ebx);

            if ((int32_t)edi > (int32_t)ebx)
            {
                edi = 0u;
                g->edi = edi;
                g->ebx = ebx;
                g->ebp = ebp;
                g->eax = eax;
                g->esi = self;

                do
                {
                    uint32_t ecx = rd32(self + 0x20u) + edi;

                    g->ecx = ecx;
                    g->eax = eax;
                    g->esi = self;
                    g->esp = sp0 - 12u;

                    cow_cdecl(g, COW_IMG(0x10273fc0u), 1u, ecx);

                    eax = rd32(self + 0x1cu);
                    ++ebx;
                    edi += 0xd8u;

                    g->eax = eax;
                    g->ebx = ebx;
                    g->edi = edi;
                    g->ebp = ebp;
                    g->esi = self;
                } while ((int32_t)ebx < (int32_t)eax);
            }
        }

        eax = g->eax;
        edx = g->edx;
    }

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;
    g->edx = edx;
    g->esp = sp0;

    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10273c40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self   = rd32(sp0 + 4u);
    const uint32_t count1 = rd32(sp0 + 8u);
    const uint32_t count2 = rd32(sp0 + 12u);

    const uint32_t result = cow_fn_10273c40(g, sp0, self, count1, count2);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
