/* f_0x10015bf0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Initializes or updates a caller-supplied string buffer using a global mode word, then copies the prepared local string into the supplied destination.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10015bf0(Guest* g, uint32_t self, uint32_t param_1)
{
    (void)self;

    const uint32_t sp0 = g->esp;
    const uint32_t buf = cow_frame(g, sp0, 0x108u);

    const uint32_t pGlobal = rd32(COW_IMG(0x103d3cb8u));
    const uint32_t mode = rd32(pGlobal + 0x20u);
    const uint32_t idx = mode - 1u;

    if (idx <= 3u)
    {
        switch (idx)
        {
            case 0u:
            case 1u:
            {
                uint32_t i = 0u;
                uint8_t c;
                do
                {
                    c = rd8(COW_IMG(0x10350664u) + i);
                    wr8(buf + i, c);
                    ++i;
                } while (c != 0u);
                break;
            }

            case 2u:
            {
                const uint32_t v = cow_cdecl(g, COW_IMG(0x10016480u), 0u);
                cow_cdecl(g, COW_IMG(0x10312031u), 3u,
                          buf,
                          COW_IMG(0x1035065cu),
                          v);
                break;
            }

            case 3u:
            default:
                break;
        }
    }
    else
    {
        uint32_t i = 0u;
        uint8_t c;
        do
        {
            c = rd8(COW_IMG(0x10350664u) + i);
            wr8(buf + i, c);
            ++i;
        } while (c != 0u);
    }

    /*
       repne scasb al, byte ptr es:[edi] with al == 0:
         while ecx != 0:
             compare al with byte [edi]
             decrement ecx
             increment edi
             stop on equal

       For a NUL-terminated string of length L, after the instruction:
         ecx = 0xffffffff - (L + 1)
         edi = start + (L + 1)

       If no zero is found before ecx reaches 0:
         ecx = 0
         edi = start + 0xffffffff
    */

    uint32_t ecx = 0xffffffffu;
    uint32_t edi = param_1;

    while (ecx != 0u)
    {
        const uint8_t c = rd8(edi);
        --ecx;
        ++edi;
        if (c == 0u)
            break;
    }

    ecx = ~ecx;       /* bytes copied by the later rep movsd/rep movsb, or 0 if capped */
    edi -= ecx;       /* edi restored to param_1 by sub edi, ecx */

    uint32_t esi = edi;
    const uint32_t ebp = ecx;

    /* Second repne scasb over the temporary buffer. */
    ecx = 0xffffffffu;
    edi = buf;

    while (ecx != 0u)
    {
        const uint8_t c = rd8(edi);
        --ecx;
        ++edi;
        if (c == 0u)
            break;
    }

    ecx = ebp;        /* mov ecx, ebp */
    --edi;            /* dec edi: destination just past the temporary string's terminator */

    uint32_t n = ecx >> 2;
    while (n != 0u)
    {
        wr32(edi, rd32(esi));
        edi += 4u;
        esi += 4u;
        --n;
    }

    n = ecx & 3u;
    while (n != 0u)
    {
        wr8(edi, rd8(esi));
        ++edi;
        ++esi;
        --n;
    }

    uint32_t eax = buf;
    uint32_t edx = param_1 - buf;

    uint8_t c;
    do
    {
        c = rd8(eax);
        wr8(edx + eax, c);
        ++eax;
    } while (c != 0u);

    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10015bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10015bf0(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
